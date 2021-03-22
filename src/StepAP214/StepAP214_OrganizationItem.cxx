// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <StepAP214_OrganizationItem.ixx>
#include <Interface_Macros.hxx>

StepAP214_OrganizationItem::StepAP214_OrganizationItem ()  {  }

Standard_Integer  StepAP214_OrganizationItem::CaseNum (const Handle(Standard_Transient)& ent) const
{
  if (ent.IsNull()) return 0;
  if (ent->IsKind(STANDARD_TYPE(StepAP214_AppliedOrganizationAssignment))) return 1;
  if (ent->IsKind(STANDARD_TYPE(StepBasic_Approval))) return 2;
  if (ent->IsKind(STANDARD_TYPE(StepRepr_AssemblyComponentUsageSubstitute))) return 3;
  if (ent->IsKind(STANDARD_TYPE(StepBasic_DocumentFile))) return 4;
  if (ent->IsKind(STANDARD_TYPE(StepRepr_MaterialDesignation))) return 5;
  if (ent->IsKind(STANDARD_TYPE(StepVisual_MechanicalDesignGeometricPresentationRepresentation))) return 6;
  if (ent->IsKind(STANDARD_TYPE(StepVisual_PresentationArea))) return 7;
  if (ent->IsKind(STANDARD_TYPE(StepBasic_Product))) return 8;
  if (ent->IsKind(STANDARD_TYPE(StepBasic_ProductDefinition))) return 9;
  if (ent->IsKind(STANDARD_TYPE(StepBasic_ProductDefinitionFormation))) return 10;
  if (ent->IsKind(STANDARD_TYPE(StepBasic_ProductDefinitionRelationship))) return 11;
  if (ent->IsKind(STANDARD_TYPE(StepRepr_PropertyDefinition))) return 12;
  if (ent->IsKind(STANDARD_TYPE(StepShape_ShapeRepresentation))) return 13;
  if (ent->IsKind(STANDARD_TYPE(StepBasic_SecurityClassification))) return 14;
  return 0;
}

Handle(StepAP214_AppliedOrganizationAssignment)  StepAP214_OrganizationItem::AppliedOrganizationAssignment() const
{  return GetCasted(StepAP214_AppliedOrganizationAssignment,Value());  }

Handle(StepBasic_Approval)  StepAP214_OrganizationItem::Approval() const
{  return GetCasted(StepBasic_Approval,Value());  }
