
// Week9Class1View.cpp : CWeek9Class1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week9Class1.h"
#endif

#include "Week9Class1Doc.h"
#include "Week9Class1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9Class1View

IMPLEMENT_DYNCREATE(CWeek9Class1View, CView)

BEGIN_MESSAGE_MAP(CWeek9Class1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek9Class1View 构造/析构

CWeek9Class1View::CWeek9Class1View()
{
	// TODO: 在此处添加构造代码

}

CWeek9Class1View::~CWeek9Class1View()
{
}

BOOL CWeek9Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek9Class1View 绘制

void CWeek9Class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek9Class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek9Class1View 诊断

#ifdef _DEBUG
void CWeek9Class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9Class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9Class1Doc* CWeek9Class1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9Class1Doc)));
	return (CWeek9Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9Class1View 消息处理程序


void CWeek9Class1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
}
