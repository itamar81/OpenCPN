//////////////////////////////////////////////////////////////////////////////
// Name:        SVGScriptElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_SCRIPT_ELEMENT_H
#define WX_SVG_SCRIPT_ELEMENT_H

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGExternalResourcesRequired.h"
#include "String_wxsvg.h"
#include "Element.h"
#include "SVGAnimatedType.h"

class wxSVGScriptElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGExternalResourcesRequired
{
  protected:
    wxString m_type;

  public:
    inline const wxString& GetType() const { return m_type; }
    inline void SetType(const wxString& n) { m_type = n; }

  public:
    wxSVGScriptElement(wxString tagName = wxT("script")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGScriptElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGScriptElement(*this); }
    bool HasAttribute(const wxString& name) const;
    wxString GetAttribute(const wxString& name) const;
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
    bool SetAnimatedValue(const wxString& name, const wxSVGAnimatedType& value);
    virtual wxSVGDTD GetDtd() const { return wxSVG_SCRIPT_ELEMENT; }
};

#endif // WX_SVG_SCRIPT_ELEMENT_H