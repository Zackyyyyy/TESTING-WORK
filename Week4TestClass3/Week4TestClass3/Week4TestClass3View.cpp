
// Week4TestClass3View.cpp : CWeek4TestClass3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4TestClass3.h"
#endif

#include "Week4TestClass3Doc.h"
#include "Week4TestClass3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4TestClass3View

IMPLEMENT_DYNCREATE(CWeek4TestClass3View, CView)

BEGIN_MESSAGE_MAP(CWeek4TestClass3View, CView)
END_MESSAGE_MAP()

// CWeek4TestClass3View 构造/析构

CWeek4TestClass3View::CWeek4TestClass3View()
{
	// TODO: 在此处添加构造代码

}

CWeek4TestClass3View::~CWeek4TestClass3View()
{
}

BOOL CWeek4TestClass3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4TestClass3View 绘制

void CWeek4TestClass3View::OnDraw(CDC* /*pDC*/)
{
	CWeek4TestClass3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4TestClass3View 诊断

#ifdef _DEBUG
void CWeek4TestClass3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4TestClass3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4TestClass3Doc* CWeek4TestClass3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4TestClass3Doc)));
	return (CWeek4TestClass3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4TestClass3View 消息处理程序
