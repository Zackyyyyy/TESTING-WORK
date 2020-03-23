
// FUCKING TESTCLASS 2.8View.cpp : CFUCKINGTESTCLASS28View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "FUCKING TESTCLASS 2.8.h"
#endif

#include "FUCKING TESTCLASS 2.8Doc.h"
#include "FUCKING TESTCLASS 2.8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFUCKINGTESTCLASS28View

IMPLEMENT_DYNCREATE(CFUCKINGTESTCLASS28View, CView)

BEGIN_MESSAGE_MAP(CFUCKINGTESTCLASS28View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CFUCKINGTESTCLASS28View 构造/析构

CFUCKINGTESTCLASS28View::CFUCKINGTESTCLASS28View()
{
	// TODO: 在此处添加构造代码

}

CFUCKINGTESTCLASS28View::~CFUCKINGTESTCLASS28View()
{
}

BOOL CFUCKINGTESTCLASS28View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CFUCKINGTESTCLASS28View 绘制

void CFUCKINGTESTCLASS28View::OnDraw(CDC* pDC)
{
	CFUCKINGTESTCLASS28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect A(100, 100, 200, 200);
	CRect B(300, 300, 400, 400);
	CRect C(500, 500, 600, 600);
	pDC->Rectangle(A);
	pDC->Rectangle(B);
	pDC->Rectangle(C);
	// TODO: 在此处为本机数据添加绘制代码
}


// CFUCKINGTESTCLASS28View 诊断

#ifdef _DEBUG
void CFUCKINGTESTCLASS28View::AssertValid() const
{
	CView::AssertValid();
}

void CFUCKINGTESTCLASS28View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFUCKINGTESTCLASS28Doc* CFUCKINGTESTCLASS28View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFUCKINGTESTCLASS28Doc)));
	return (CFUCKINGTESTCLASS28Doc*)m_pDocument;
}
#endif //_DEBUG


// CFUCKINGTESTCLASS28View 消息处理程序


void CFUCKINGTESTCLASS28View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString i;
	CString o;
	CFUCKINGTESTCLASS28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (point.x >= 100 && point.x <= 200 && point.y >= 100 && point.y <= 200)
	{
		pDoc->a = rand() % 50;
		i.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, i);
	}
	else if (point.x >= 300 && point.x <= 400 && point.y >= 300 && point.y <= 400)
	{
		pDoc->b = rand() % 50;
		o.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, o);
	}
	else
	{
		CString g;
		g = (_T("无效"));
		dc.TextOutW(point.x, point.y, g);
	}
	CView::OnLButtonDown(nFlags, point);
}


void CFUCKINGTESTCLASS28View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFUCKINGTESTCLASS28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CClientDC dc(this);
	if (point.x >= 500 && point.x <= 600 && point.y >= 500 && point.y <= 600)
	{
		CString a;
		pDoc->c = pDoc->a + pDoc->b;
		a.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, a);
	}
	else
	{
		CString a;
		a = (_T("无效"));
		dc.TextOutW(point.x, point.y, a);
	}
	CView::OnRButtonDown(nFlags, point);
}
