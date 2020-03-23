
// Week5Class1.5View.cpp : CWeek5Class15View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week5Class1.5.h"
#endif

#include "Week5Class1.5Doc.h"
#include "Week5Class1.5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5Class15View

IMPLEMENT_DYNCREATE(CWeek5Class15View, CView)

BEGIN_MESSAGE_MAP(CWeek5Class15View, CView)
END_MESSAGE_MAP()

// CWeek5Class15View 构造/析构

CWeek5Class15View::CWeek5Class15View()
{
	// TODO: 在此处添加构造代码

}

CWeek5Class15View::~CWeek5Class15View()
{
}

BOOL CWeek5Class15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek5Class15View 绘制

void CWeek5Class15View::OnDraw(CDC* /*pDC*/)
{
	CWeek5Class15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek5Class15View 诊断

#ifdef _DEBUG
void CWeek5Class15View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5Class15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5Class15Doc* CWeek5Class15View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5Class15Doc)));
	return (CWeek5Class15Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5Class15View 消息处理程序
