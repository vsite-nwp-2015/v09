// DlgView.cpp : implementation of the DlgView class
//

#include "stdafx.h"
#include "v9.h"

#include "Doc.h"
#include "DlgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DlgView

IMPLEMENT_DYNCREATE(DlgView, CFormView)

BEGIN_MESSAGE_MAP(DlgView, CFormView)
	//{{AFX_MSG_MAP(DlgView)
	//}}AFX_MSG_MAP
	ON_EN_KILLFOCUS(IDC_EDIT1, &DlgView::KillFocus)
	ON_EN_KILLFOCUS(IDC_EDIT2, &DlgView::KillFocus)
	ON_EN_KILLFOCUS(IDC_EDIT3, &DlgView::KillFocus)
	ON_EN_KILLFOCUS(IDC_EDIT4, &DlgView::KillFocus)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DlgView construction/destruction

DlgView::DlgView()
	: CFormView(DlgView::IDD)
	, LeftEdit(_T(""))
	, TopEdit(_T(""))
	, RightEdit(_T(""))
	, BottomEdit(_T(""))
{
}

DlgView::~DlgView()
{
}

void DlgView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DlgView)
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_EDIT1, GetDocument()->rekt.left);
	DDX_Text(pDX, IDC_EDIT2, GetDocument()->rekt.top);
	DDX_Text(pDX, IDC_EDIT3, GetDocument()->rekt.right);
	DDX_Text(pDX, IDC_EDIT4, GetDocument()->rekt.bottom);
}

BOOL DlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CFormView::PreCreateWindow(cs);
}

void DlgView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// DlgView diagnostics

#ifdef _DEBUG
void DlgView::AssertValid() const
{
	CFormView::AssertValid();
}

void DlgView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

Doc* DlgView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Doc)));
	return (Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// DlgView message handlers



void DlgView::KillFocus()
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	GetDocument()->UpdateAllViews(this);
}

void DlgView::OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, CObject* /*pHint*/)
{
	// TODO: Add your specialized code here and/or call the base class
	UpdateData(false);
}
