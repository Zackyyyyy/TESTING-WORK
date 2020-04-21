
// Week10Class2.3View.cpp : CWeek10Class23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week10Class2.3.h"
#endif

#include "Week10Class2.3Doc.h"
#include "Week10Class2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek10Class23View

IMPLEMENT_DYNCREATE(CWeek10Class23View, CView)

BEGIN_MESSAGE_MAP(CWeek10Class23View, CView)
	ON_COMMAND(ID_OENDIA2, &CWeek10Class23View::OnOendia2)
END_MESSAGE_MAP()

// CWeek10Class23View 构造/析构

CWeek10Class23View::CWeek10Class23View()
{
	// TODO: 在此处添加构造代码

}

CWeek10Class23View::~CWeek10Class23View()
{
}

BOOL CWeek10Class23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek10Class23View 绘制

void CWeek10Class23View::OnDraw(CDC* /*pDC*/)
{
	CWeek10Class23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek10Class23View 诊断

#ifdef _DEBUG
void CWeek10Class23View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10Class23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Class23Doc* CWeek10Class23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Class23Doc)));
	return (CWeek10Class23Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10Class23View 消息处理程序


void CWeek10Class23View::OnOendia2()
{
	// TODO: 在此添加命令处理程序代码
}
