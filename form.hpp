﻿//==============================================================================
//  WARNING!!  This file is overwritten by the Block Styler while generating
//  the automation code. Any modifications to this file will be lost after
//  generating the code again.
//
//       Filename:  C:\Users\putilov_aa\source\repos\Dimension\Dimension\form.hpp
//
//        This file was generated by the NX Block Styler
//        Created by: putilov_aa
//              Version: NX 10
//              Date: 01-10-2024  (Format: mm-dd-yyyy)
//              Time: 06:29
//
//==============================================================================

#ifndef FORM_H_INCLUDED
#define FORM_H_INCLUDED

//------------------------------------------------------------------------------
//These includes are needed for the following template code
//------------------------------------------------------------------------------
#include <uf_defs.h>
#include <uf_ui_types.h>
#include <iostream>
#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_SelectObject.hxx>
#include <NXOpen/BlockStyler_StringBlock.hxx>

#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Annotations_Annotation.hxx>
#include <NXOpen/Annotations_Note.hxx>
#include <NXOpen/Annotations_VerticalDimension.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Update.hxx>
#include <NXOpen/NXObjectManager.hxx>
#include <NXOpen/Annotations_ParallelDimension.hxx>
#include <NXOpen/Annotations_HorizontalDimension.hxx>

#include <uf_ui.h>
#include <uf_drf.h>
#include <NXSigningResource.cpp>
//------------------------------------------------------------------------------
//Bit Option for Property: SnapPointTypesEnabled
//------------------------------------------------------------------------------
#define              SnapPointTypesEnabled_UserDefined (1 << 0);
#define                 SnapPointTypesEnabled_Inferred (1 << 1);
#define           SnapPointTypesEnabled_ScreenPosition (1 << 2);
#define                 SnapPointTypesEnabled_EndPoint (1 << 3);
#define                 SnapPointTypesEnabled_MidPoint (1 << 4);
#define             SnapPointTypesEnabled_ControlPoint (1 << 5);
#define             SnapPointTypesEnabled_Intersection (1 << 6);
#define                SnapPointTypesEnabled_ArcCenter (1 << 7);
#define            SnapPointTypesEnabled_QuadrantPoint (1 << 8);
#define            SnapPointTypesEnabled_ExistingPoint (1 << 9);
#define             SnapPointTypesEnabled_PointonCurve (1 <<10);
#define           SnapPointTypesEnabled_PointonSurface (1 <<11);
#define         SnapPointTypesEnabled_PointConstructor (1 <<12);
#define     SnapPointTypesEnabled_TwocurveIntersection (1 <<13);
#define             SnapPointTypesEnabled_TangentPoint (1 <<14);
#define                    SnapPointTypesEnabled_Poles (1 <<15);
#define         SnapPointTypesEnabled_BoundedGridPoint (1 <<16);
#define         SnapPointTypesEnabled_FacetVertexPoint (1 <<17);
//------------------------------------------------------------------------------
//Bit Option for Property: SnapPointTypesOnByDefault
//------------------------------------------------------------------------------
#define             SnapPointTypesOnByDefault_EndPoint (1 << 3);
#define             SnapPointTypesOnByDefault_MidPoint (1 << 4);
#define         SnapPointTypesOnByDefault_ControlPoint (1 << 5);
#define         SnapPointTypesOnByDefault_Intersection (1 << 6);
#define            SnapPointTypesOnByDefault_ArcCenter (1 << 7);
#define        SnapPointTypesOnByDefault_QuadrantPoint (1 << 8);
#define        SnapPointTypesOnByDefault_ExistingPoint (1 << 9);
#define         SnapPointTypesOnByDefault_PointonCurve (1 <<10);
#define       SnapPointTypesOnByDefault_PointonSurface (1 <<11);
#define     SnapPointTypesOnByDefault_PointConstructor (1 <<12);
#define     SnapPointTypesOnByDefault_BoundedGridPoint (1 <<16);
//------------------------------------------------------------------------------
// Namespaces needed for following template
//------------------------------------------------------------------------------
using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

class DllExport form
{
    // class members
public:
    static Session *theSession;
    static UI *theUI;
    form();
    ~form();
    int Show();
    
    //----------------------- BlockStyler Callback Prototypes ---------------------
    // The following member function prototypes define the callbacks 
    // specified in your BlockStyler dialog.  The empty implementation
    // of these prototypes is provided in the form.cpp file. 
    // You are REQUIRED to write the implementation for these functions.
    //------------------------------------------------------------------------------
    void initialize_cb();
    void dialogShown_cb();
    int apply_cb();
    int ok_cb();
    int update_cb(NXOpen::BlockStyler::UIBlock* block);
    PropertyList* GetBlockProperties(const char *blockID);
    
private:
    const char* theDlxFileName;
    NXOpen::BlockStyler::BlockDialog* theDialog;
    NXOpen::BlockStyler::Group* group0;// Block type: Group
    NXOpen::BlockStyler::SelectObject* selection0;// Block type: Selection
    NXOpen::BlockStyler::StringBlock* string0;// Block type: String
    
};
#endif //FORM_H_INCLUDED
