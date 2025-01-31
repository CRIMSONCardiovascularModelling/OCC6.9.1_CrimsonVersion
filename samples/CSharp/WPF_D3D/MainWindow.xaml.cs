﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.ComponentModel;
using System.Windows.Forms.Integration;
using System.Windows.Interop;
using System.Runtime.InteropServices;

namespace IE_WPF_D3D
{
  /// <summary>
  /// Interaction logic for MainWindow.xaml
  /// </summary>
  public partial class MainWindow : Window, INotifyPropertyChanged
  {
    public event PropertyChangedEventHandler PropertyChanged;
    protected void RaisePropertyChanged (string thePropertyName)
    {
      if (PropertyChanged != null)
      {
        PropertyChanged (this, new PropertyChangedEventArgs (thePropertyName));
      }
    }

    public MainWindow ()
    {
      InitializeComponent ();

      StatusBarText = String.Empty;
      IsHlrOffPushed = false;
      IsHlrOnPushed = true;
      IsZoomWinEnabled = true;

      #region menu operations

      CommandBinding aBind_New = new CommandBinding (IECommands.New);
      aBind_New.Executed += NewCommand_Executed;
      CommandBindings.Add (aBind_New);

      CommandBinding aBind_Close = new CommandBinding (IECommands.Close);
      aBind_Close.Executed += CloseCommand_Executed;
      aBind_Close.CanExecute += CloseCommand_CanExecute;
      CommandBindings.Add (aBind_Close);

      CommandBinding aBind_Quit = new CommandBinding (IECommands.Quit);
      aBind_Quit.Executed += QuitCommand_Executed;
      CommandBindings.Add (aBind_Quit);

      CommandBinding aBind_About = new CommandBinding (IECommands.About);
      aBind_About.Executed += AboutCommand_Executed;
      CommandBindings.Add (aBind_About);

      #endregion
    }

    private String myStatusBarText;
    public String StatusBarText
    {
      get
      {
        return myStatusBarText;
      }
      private set
      {
        myStatusBarText = value;
        RaisePropertyChanged ("StatusBarText");
      }
    }

    private bool isHlrOffPushed;
    public Boolean IsHlrOffPushed
    {
      get
      {
        return isHlrOffPushed;
      }
      set
      {
        isHlrOffPushed = value;
        RaisePropertyChanged ("isHlrOffPushed");
      }
    }

    private bool isHlrOnPushed;
    public Boolean IsHlrOnPushed
    {
      get
      {
        return isHlrOnPushed;
      }
      set
      {
        isHlrOnPushed = value;
        RaisePropertyChanged ("IsHlrOnPushed");
      }
    }

    private bool isZoomWinEnabled;
    public Boolean IsZoomWinEnabled
    {
      get
      {
        return isZoomWinEnabled;
      }
      set
      {
        isZoomWinEnabled = value;
        RaisePropertyChanged ("IsZoomWinEnabled");
      }
    }

    private OCCViewer ActiveViewer
    {
      get
      {
        if (!IsDocumentOpen)
        {
          return null;
        }

        Grid aGrid = (ViewPanel.SelectedContent) as Grid;

        if (aGrid == null)
        {
          return null;
        }

        return Map[aGrid].Viewer;
      }
    }

    public Boolean IsDocumentOpen
    {
      get
      {
        return ViewPanel.Items.Count > 0;
      }
    }

    private int myDocumentCounter = 1;

    Dictionary<Grid, D3DViewer> Map = new Dictionary<Grid, D3DViewer> ();

    private void NewCommand_Executed (object sender, ExecutedRoutedEventArgs e)
    {
      D3DViewer aViwer = new D3DViewer ();

      Grid g = new Grid ();

      Map.Add (g, aViwer);

      ImageBrush anImage = new ImageBrush (aViwer.Image);
      
      anImage.RelativeTransform = new ScaleTransform (1.0, -1.0, 0.5, 0.5);

      g.Background = anImage;
      g.MouseMove += new MouseEventHandler (g_MouseMove);
      g.MouseDown += new MouseButtonEventHandler (g_MouseDown);
      g.MouseUp += new MouseButtonEventHandler (g_MouseUp);

      g.HorizontalAlignment = System.Windows.HorizontalAlignment.Stretch;


      TabItem aNewTab = new TabItem ();
      aNewTab.Content = g;

      aNewTab.HorizontalAlignment = System.Windows.HorizontalAlignment.Stretch;
      aNewTab.HorizontalContentAlignment = System.Windows.HorizontalAlignment.Stretch;
      aNewTab.VerticalContentAlignment = System.Windows.VerticalAlignment.Stretch;

      g.SizeChanged += new SizeChangedEventHandler (g_SizeChanged);

      aNewTab.IsSelected = true;
      aNewTab.Header = "Document " + myDocumentCounter.ToString ();
      myDocumentCounter++;

      ViewPanel.Items.Add (aNewTab);

      ViewPanel.Focus ();

      // update XAML property
      RaisePropertyChanged ("IsDocumentOpen");
    }

    void g_SizeChanged (object sender, SizeChangedEventArgs e)
    {
      if (!IsDocumentOpen)
        return;

      Grid aGrid = (ViewPanel.SelectedContent) as Grid;

      if (aGrid == null)
        return;

      Map[aGrid].Resize (Convert.ToInt32 (e.NewSize.Width),
                         Convert.ToInt32 (e.NewSize.Height));
    }

    void g_MouseUp (object sender, MouseButtonEventArgs e)
    {
      Grid aGrid = (ViewPanel.SelectedContent) as Grid;

      if (aGrid != null)
      {
          ActiveViewer.OnMouseUp(aGrid, e);
      }
    }

    void g_MouseDown (object sender, MouseButtonEventArgs e)
    {
      Grid aGrid = (ViewPanel.SelectedContent) as Grid;

      if (aGrid != null)
      {
          ActiveViewer.OnMouseDown(ViewPanel, e);
      }
    }

    void g_MouseMove (object sender, MouseEventArgs e)
    {
      Grid aGrid = (ViewPanel.SelectedContent) as Grid;

      if (aGrid != null)
      {
        ActiveViewer.OnMouseMove (aGrid, e);
      }
    }

    private void CloseCommand_Executed (object sender, ExecutedRoutedEventArgs e)
    {
      if (ViewPanel.Items.Count > 0)
      {
        Grid aGrid = (ViewPanel.SelectedContent) as Grid;

        if (aGrid == null)
        {
          return;
        }

        Map[aGrid].StopRenderingScene ();

        ViewPanel.Items.Remove (ViewPanel.SelectedItem);
      }

      // update XAML property
      RaisePropertyChanged ("IsDocumentOpen");
    }

    private void CloseCommand_CanExecute (object sender, CanExecuteRoutedEventArgs e)
    {
      e.CanExecute = IsDocumentOpen;
    }

    private void QuitCommand_Executed (object sender, ExecutedRoutedEventArgs e)
    {
      this.Close ();
    }

    private void ImportBRep_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ImportModel (ModelFormat.BREP);
      }
    }

    private void ImportIges_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ImportModel (ModelFormat.IGES);
      }
    }

    private void ImportStep_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ImportModel (ModelFormat.STEP);
      }
    }

    private void ExportBRep_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ExportModel (ModelFormat.BREP);
      }
    }

    private void ExportStep_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ExportModel (ModelFormat.STEP);
      }
    }

    private void ExportIges_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ExportModel (ModelFormat.IGES);
      }
    }

    private void ExportStl_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ExportModel (ModelFormat.STL);
      }
    }

    private void ExportVrml_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ExportModel (ModelFormat.VRML);
      }
    }

    private void ExportImage_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.ExportModel (ModelFormat.IMAGE);
      }
    }

    private void FitAllBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.FitAll ();
      }
    }

    private void ZoomWindowBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        IsZoomWinEnabled = false;
        ActiveViewer.ZoomWindow ();
      }
    }

    private void DynamicZoomingBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.DynamicZooming ();
      }
    }

    private void DynamicPanningBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.DynamicPanning ();
      }
    }

    private void GlobalPanningBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.GlobalPanning ();
      }
    }

    private void FrontBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.FrontView ();
      }
    }

    private void BackBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.BackView ();
      }
    }

    private void TopBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.TopView ();
      }
    }

    private void BottomBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.BottomView ();
      }
    }

    private void LeftBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.LeftView ();
      }
    }

    private void RightBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.RightView ();
      }
    }

    private void AxoBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.AxoView ();
      }
    }

    private void ResetBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.Reset ();
      }
    }

    private void DynamicRotationBtn_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.DynamicRotation ();
      }
    }

    private void HiddenOffBtn_Click (object sender, RoutedEventArgs e)
    {
      IsHlrOffPushed = true;
      IsHlrOnPushed = false;
      if (ActiveViewer != null)
      {
        ActiveViewer.HiddenOff ();
      }
    }

    private void HiddenOnBtn_Click (object sender, RoutedEventArgs e)
    {
      IsHlrOffPushed = false;
      IsHlrOnPushed = true;
      if (ActiveViewer != null)
      {
        ActiveViewer.HiddenOn ();
      }
    }

    private void AboutCommand_Executed (object sender, ExecutedRoutedEventArgs e)
    {
      AboutDialog aDlg = new AboutDialog ();
      aDlg.ShowDialog ();
    }

    private void ToolBar_MouseEnter (object sender, MouseEventArgs e)
    {
      StatusBarText = "Toolbar";
    }

    private void DocumentToolBar_MouseEnter (object sender, MouseEventArgs e)
    {
      StatusBarText = "Document toolbar";
    }

    private void ViewToolBar_MouseEnter (object sender, MouseEventArgs e)
    {
      StatusBarText = "View toolbar";
    }

    private void ToolBar_MouseLeave (object sender, MouseEventArgs e)
    {
      StatusBarText = "";
    }

    public void OnZoomingFinished (object sender, EventArgs e)
    {
      IsZoomWinEnabled = true;
    }

    public bool IsWireframeEnabled
    {
      get
      {
        if (ActiveViewer != null)
        {
          return ActiveViewer.IsWireframeEnabled;
        }
        return false;
      }
    }

    private void Wireframe_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.Wireframe ();
      }
    }

    private void Shading_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.Shading ();
      }
    }

    public bool IsShadingEnabled
    {
      get
      {
        if (ActiveViewer != null)
        {
          return ActiveViewer.IsShadingEnabled;
        }
        return false;
      }
    }

    private void Color_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.Color ();
      }
    }

    public bool IsColorEnabled
    {
      get
      {
        if (ActiveViewer != null)
        {
          return ActiveViewer.IsColorEnabled;
        }
        return false;
      }
    }

    private void Material_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.Material ();
      }
    }

    public bool IsMaterialEnabled
    {
      get
      {
        if (ActiveViewer != null)
        {
          return ActiveViewer.IsMaterialEnabled;
        }
        return false;
      }
    }

    private void Transparency_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.Transparency ();
      }
    }

    public bool IsTransparencyEnabled
    {
      get
      {
        if (ActiveViewer != null)
        {
          return ActiveViewer.IsTransparencyEnabled;
        }
        return false;
      }
    }

    private void Delete_Click (object sender, RoutedEventArgs e)
    {
      if (ActiveViewer != null)
      {
        ActiveViewer.Delete ();
      }
    }

    private void Background_Click(object sender, RoutedEventArgs e)
    {
        if (ActiveViewer != null)
        {
            ActiveViewer.Background();
        }
    }

    public bool IsDeleteEnabled
    {
      get
      {
        if (ActiveViewer != null)
        {
          return ActiveViewer.IsDeleteEnabled;
        }
        return false;
      }
    }

    private void AvaliabiltyOfOperationToolbarChanged ()
    {
      RaisePropertyChanged ("IsWireframeEnabled");
      RaisePropertyChanged ("IsShadingEnabled");
      RaisePropertyChanged ("IsTransparencyEnabled");
      RaisePropertyChanged ("IsColorEnabled");
      RaisePropertyChanged ("IsMaterialEnabled");
      RaisePropertyChanged ("IsDeleteEnabled");
    }

    public void OnAvaliabiltyOfOperationsChanged (object sender, EventArgs e)
    {
      AvaliabiltyOfOperationToolbarChanged ();
    }

    private void OnViewerChanged (object sender, SelectionChangedEventArgs e)
    {
      if (e.RemovedItems.Count > 0)
      {
        Grid aHost = ((e.RemovedItems[0] as TabItem).Content) as Grid;
        if (aHost == null)
        {
          return;
        }

        OCCViewer aViewer = Map[aHost].Viewer;
        if (aViewer != null)
        {
          aViewer.ZoomingFinished -= new EventHandler (OnZoomingFinished);
          aViewer.AvaliabiltyOfOperationsChanged -= new EventHandler (OnAvaliabiltyOfOperationsChanged);
        }
      }

      if (e.AddedItems.Count > 0)
      {
        Grid aHost = ((e.AddedItems[0] as TabItem).Content) as Grid;
        if (aHost == null)
        {
          return;
        }

        OCCViewer aViewer = Map[aHost].Viewer;
        if (aViewer != null)
        {
          aViewer.ZoomingFinished += new EventHandler (OnZoomingFinished);
          aViewer.AvaliabiltyOfOperationsChanged += new EventHandler (OnAvaliabiltyOfOperationsChanged);
        }
      }

      AvaliabiltyOfOperationToolbarChanged ();
    }

    private void OnContextOpened(object sender, RoutedEventArgs e)
    {
        this.WireframeItem.IsEnabled    = IsWireframeEnabled;
        this.ShadingItem.IsEnabled      = IsShadingEnabled;
        this.ColorItem.IsEnabled        = IsColorEnabled;
        this.MaterialItem.IsEnabled     = IsMaterialEnabled;
        this.TransparencyItem.IsEnabled = IsTransparencyEnabled;
        this.DeleteItem.IsEnabled       = IsDeleteEnabled;
    }
  }
}
