
// DrawView.cpp : implementation of the CDrawView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw.h"
#endif

#include "DrawDoc.h"
#include "DrawView.h"

#include "rect.h"
#include "circ.h"
#include "composite.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawView

IMPLEMENT_DYNCREATE(CDrawView, CView)

BEGIN_MESSAGE_MAP(CDrawView, CView)
	// Standard printing commands
    ON_COMMAND(ID_DRAW_RECT, &CDrawView::OnDrawRect)
    ON_COMMAND(ID_DRAW_CIRCLE, &CDrawView::OnDrawCircle)
    ON_COMMAND(ID_DRAW_COMPOSITE, &CDrawView::OnDrawComposite)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawView construction/destruction

CDrawView::CDrawView()
{
    srand((UINT) time(0));
    shape = NULL;
}

CDrawView::~CDrawView()
{
}

BOOL CDrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawView drawing

void CDrawView::OnDraw(CDC* pDC)
{
	CDrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
    if(shape)
        shape->Draw(pDC->m_hDC);
	// TODO: add draw code for native data here
}

void CDrawView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawView diagnostics

#ifdef _DEBUG
void CDrawView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawDoc* CDrawView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawDoc)));
	return (CDrawDoc*)m_pDocument;
}
#endif //_DEBUG

inline double frand()
{
    return rand()/32767.0;
}

Geometry::Rectangle* RandRect(const CRect& clientRect)
{
    int cx = int(frand() * clientRect.Width());
    int cy = int(frand() * clientRect.Height());
    int W = min(cx, clientRect.Width()-cx);
    int H = min(cy, clientRect.Height()-cy);
    int w = int(frand() * W);
    int h = int(frand() * H);
    return new Geometry::Rectangle(cx - w, cy - h, cx + w, cy + h);
}

Geometry::Circle* RandCircle(const CRect& clientRect)
{
    int cx = int(frand() * clientRect.Width());
    int cy = int(frand() * clientRect.Height());
    int W = min(cx, clientRect.Width()-cx);
    int H = min(cy, clientRect.Height()-cy);
    int r = int(frand() * min(W, H));
    return new Geometry::Circle(cx, cy, r);
}

Geometry::Composite* RandComposite(const CRect& clientRect)
{
    Geometry::Composite* comp = new Geometry::Composite;
    int numShapes = 1 + int(10*frand());
    for(int i = 0; i < numShapes; ++i)
        comp->Add(frand() < 0.5 ? (Geometry::Shape*) RandRect(clientRect) : (Geometry::Shape*) RandCircle(clientRect));
    return comp;
}

// CDrawView message handlers

void CDrawView::OnDrawRect()
{
    CRect clientRect;
    GetClientRect(clientRect);
    shape = RandRect(clientRect);
    Invalidate(TRUE);
}

void CDrawView::OnDrawCircle()
{
    CRect clientRect;
    GetClientRect(clientRect);
    shape = RandCircle(clientRect);
    Invalidate(TRUE);
}

void CDrawView::OnDrawComposite()
{
    CRect clientRect;
    GetClientRect(clientRect);
    shape = RandComposite(clientRect);
    Invalidate(TRUE);
}