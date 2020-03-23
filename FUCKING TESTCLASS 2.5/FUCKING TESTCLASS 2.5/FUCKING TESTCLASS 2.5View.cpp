
// FUCKING TESTCLASS 2.5View.cpp : CFUCKINGTESTCLASS25View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "FUCKING TESTCLASS 2.5.h"
#endif

#include "FUCKING TESTCLASS 2.5Doc.h"
#include "FUCKING TESTCLASS 2.5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFUCKINGTESTCLASS25View

IMPLEMENT_DYNCREATE(CFUCKINGTESTCLASS25View, CView)

BEGIN_MESSAGE_MAP(CFUCKINGTESTCLASS25View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CFUCKINGTESTCLASS25View 构造/析构

CFUCKINGTESTCLASS25View::CFUCKINGTESTCLASS25View()
{
	// TODO: 在此处添加构造代码

}

CFUCKINGTESTCLASS25View::~CFUCKINGTESTCLASS25View()
{
}

BOOL CFUCKINGTESTCLASS25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CFUCKINGTESTCLASS25View 绘制

void CFUCKINGTESTCLASS25View::OnDraw(CDC* /*pDC*/)
{
	CFUCKINGTESTCLASS25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CFUCKINGTESTCLASS25View 诊断

#ifdef _DEBUG
void CFUCKINGTESTCLASS25View::AssertValid() const
{
	CView::AssertValid();
}

void CFUCKINGTESTCLASS25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFUCKINGTESTCLASS25Doc* CFUCKINGTESTCLASS25View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFUCKINGTESTCLASS25Doc)));
	return (CFUCKINGTESTCLASS25Doc*)m_pDocument;
}
#endif //_DEBUG


// CFUCKINGTESTCLASS25View 消息处理程序


void CFUCKINGTESTCLASS25View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CString  S;
	CFUCKINGTESTCLASS25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	int D = pDoc->A + pDoc->B;
	S.Format(_T("A+B=%d"), D);
	CClientDC dc(this);
	dc.TextOutW(200, 300, S);
}
