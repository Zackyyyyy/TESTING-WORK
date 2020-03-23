
// Week4 1rdClassView.cpp : CWeek41rdClassView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4 1rdClass.h"
#endif

#include "Week4 1rdClassDoc.h"
#include "Week4 1rdClassView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek41rdClassView

IMPLEMENT_DYNCREATE(CWeek41rdClassView, CView)

BEGIN_MESSAGE_MAP(CWeek41rdClassView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CWeek41rdClassView 构造/析构

CWeek41rdClassView::CWeek41rdClassView()
{
	// TODO: 在此处添加构造代码

}

CWeek41rdClassView::~CWeek41rdClassView()
{
}

BOOL CWeek41rdClassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek41rdClassView 绘制

void CWeek41rdClassView::OnDraw(CDC* pDC)
{
	CWeek41rdClassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_tagRec);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek41rdClassView 诊断

#ifdef _DEBUG
void CWeek41rdClassView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek41rdClassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek41rdClassDoc* CWeek41rdClassView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek41rdClassDoc)));
	return (CWeek41rdClassDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek41rdClassView 消息处理程序


void CWeek41rdClassView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek41rdClassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek41rdClassView::OnLButtonUp(UINT nFlags, CPoint point)
{
	CWeek41rdClassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_tagRec.right = point.x;
	pDoc->m_tagRec.bottom = point.y;
	InvalidateRect(NULL, FALSE);
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
}


void CWeek41rdClassView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	s.Format(_T("X=%d,Y=%d"), point.x, point.y);
	dc.TextOutW(100, 100, s);
	CView::OnMouseMove(nFlags, point);
}
