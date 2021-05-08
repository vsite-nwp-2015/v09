#if !defined(AFX_PAINTVIEW_H__EEE6DC9C_A9FB_402B_9907_51D9B274A363__INCLUDED_)
#define AFX_PAINTVIEW_H__EEE6DC9C_A9FB_402B_9907_51D9B274A363__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PaintView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// PaintView view

class PaintView : public CView
{
protected:
	PaintView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(PaintView)

// Attributes
public:
	Doc* GetDocument();

	void OnUpdate(CView *, LPARAM, CObject *);

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(PaintView)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~PaintView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(PaintView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAINTVIEW_H__EEE6DC9C_A9FB_402B_9907_51D9B274A363__INCLUDED_)
