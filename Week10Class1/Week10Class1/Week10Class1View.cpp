
// Week10Class1View.cpp : CWeek10Class1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week10Class1.h"
#endif

#include "Week10Class1Doc.h"
#include "Week10Class1View.h"
#include "MyCal.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek10Class1View

IMPLEMENT_DYNCREATE(CWeek10Class1View, CView)

BEGIN_MESSAGE_MAP(CWeek10Class1View, CView)
	ON_COMMAND(ID_OPENDIA, &CWeek10Class1View::OnOpendia)
END_MESSAGE_MAP()

// CWeek10Class1View 构造/析构

CWeek10Class1View::CWeek10Class1View()
{
	// TODO: 在此处添加构造代码

}

CWeek10Class1View::~CWeek10Class1View()
{
}

BOOL CWeek10Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek10Class1View 绘制

void CWeek10Class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek10Class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek10Class1View 诊断

#ifdef _DEBUG
void CWeek10Class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10Class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Class1Doc* CWeek10Class1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Class1Doc)));
	return (CWeek10Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10Class1View 消息处理程序


void CWeek10Class1View::OnOpendia()
{
	MyCal* cal = new MyCal;
	cal->Create(MAKEINTRESOURCE(IDD_DIALOG1));
	cal->ShowWindow(1);
	// TODO: 在此添加命令处理程序代码
}
