
// Week10Class2View.cpp : CWeek10Class2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week10Class2.h"
#endif

#include "Week10Class2Doc.h"
#include "Week10Class2View.h"
#include "MyDia.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek10Class2View

IMPLEMENT_DYNCREATE(CWeek10Class2View, CView)

BEGIN_MESSAGE_MAP(CWeek10Class2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_OPENDIA, &CWeek10Class2View::OnOpendia)
END_MESSAGE_MAP()

// CWeek10Class2View 构造/析构

CWeek10Class2View::CWeek10Class2View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
}

CWeek10Class2View::~CWeek10Class2View()
{
}

BOOL CWeek10Class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek10Class2View 绘制

void CWeek10Class2View::OnDraw(CDC* pDC)
{
	CWeek10Class2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->c.left = s_point.x;
	pDoc->c.top = s_point.y;
	pDoc->c.right = e_point.x;
	pDoc->c.bottom = e_point.y;
	pDC->Ellipse(pDoc->c);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek10Class2View 诊断

#ifdef _DEBUG
void CWeek10Class2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10Class2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Class2Doc* CWeek10Class2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Class2Doc)));
	return (CWeek10Class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10Class2View 消息处理程序


void CWeek10Class2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	s_point = point;
	e_point = point;
		
	CView::OnLButtonDown(nFlags, point);
}


void CWeek10Class2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}


void CWeek10Class2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		e_point = point;
		Invalidate(false);
	}
	CView::OnMouseMove(nFlags, point);
}


void CWeek10Class2View::OnOpendia()
{
	// TODO: 在此添加命令处理程序代码
	MyDia dia;
	int t = dia.DoModal();
	if (t == IDOK)
	{
		int le, to, rig, bott;
		le = dia.left;
		to = dia.top;
		rig = dia.right;
		bott = dia.bottom;
		CRect c;
		c.left = le;
		c.top = to;
		c.right = rig;
		c.bottom = bott;
		GetDC()->Ellipse(c);
	}

}
