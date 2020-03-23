
// MFC0View.cpp : CMFC0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0.h"
#endif

#include "MFC0Doc.h"
#include "MFC0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0View

IMPLEMENT_DYNCREATE(CMFC0View, CView)

BEGIN_MESSAGE_MAP(CMFC0View, CView)
	ON_WM_TIMER()
	ON_COMMAND(ID_CircleCOLOR, &CMFC0View::OnCirclecolor)
END_MESSAGE_MAP()

// CMFC0View 构造/析构

CMFC0View::CMFC0View()
{
	set = true;
	N = 1;
	r = 50;
	// TODO: 在此处添加构造代码

}

CMFC0View::~CMFC0View()
{
}

BOOL CMFC0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0View 绘制

void CMFC0View::OnDraw(CDC* /*pDC*/)
{
	CMFC0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC0View 诊断

#ifdef _DEBUG
void CMFC0View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0Doc* CMFC0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0Doc)));
	return (CMFC0Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0View 消息处理程序



void CMFC0View::OnTimer(UINT_PTR nIDEvent)
{
	CClientDC dc(this);
	GetClientRect(&rect);
	CPoint x = rect.CenterPoint();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	if (i == 0)
	{
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = dc.SelectObject(&pen);
		r = r + 50;
		dc.Ellipse(x.x - r, x.y - r, x.x + r, x.y + r);
	}
	CView::OnTimer(nIDEvent);
}


void CMFC0View::OnCirclecolor()
{
	// TODO: 在此添加命令处理程序代码
	SetTimer(0, 500, NULL);
	OnTimer(0);
}
