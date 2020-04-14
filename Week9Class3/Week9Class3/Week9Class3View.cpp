
// Week9Class3View.cpp : CWeek9Class3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week9Class3.h"
#endif

#include "Week9Class3Doc.h"
#include "Week9Class3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9Class3View

IMPLEMENT_DYNCREATE(CWeek9Class3View, CView)

BEGIN_MESSAGE_MAP(CWeek9Class3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_MBUTTONDBLCLK()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek9Class3View 构造/析构

CWeek9Class3View::CWeek9Class3View()
{
	flag1 = 0;
	flag2 = 0;
	flag3 = 1;
	// TODO: 在此处添加构造代码

}

CWeek9Class3View::~CWeek9Class3View()
{
}

BOOL CWeek9Class3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek9Class3View 绘制

void CWeek9Class3View::OnDraw(CDC* pDC)
{
	CWeek9Class3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect clientRect;
	GetClientRect(&clientRect);
	if (cr.top != clientRect.Height() / 2 - 20)
	{
		cr.top = clientRect.Height() / 2 - 20;
		cr.bottom = clientRect.Height() / 2 + 20;
	}
	if (flag3)
	{
		cr.left = 0;
		cr.top = clientRect.Height() / 2 - 20;
		cr.right = 40;
		cr.bottom = clientRect.Height() / 2 + 20;
		flag3 = 0;
	}
	SetTimer(0, 100, NULL);
	pDC->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek9Class3View 诊断

#ifdef _DEBUG
void CWeek9Class3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9Class3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9Class3Doc* CWeek9Class3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9Class3Doc)));
	return (CWeek9Class3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9Class3View 消息处理程序


void CWeek9Class3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect clientRect;
	GetClientRect(&clientRect);
	if (flag2)
	{
		if (flag1 == 0)
		{
			cr.left += 30;
			cr.right += 30;
			Invalidate();
			if (cr.right >= clientRect.right)
				flag1 = 1;
		}
		if (flag1 == 1)
		{
			cr.left -= 30;
			cr.right -= 30;
			Invalidate();
			if (cr.left <= clientRect.left)
				flag1 = 0;
		}
	}
	CView::OnTimer(nIDEvent);
}


void CWeek9Class3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag2 = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek9Class3View::OnMButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CView::OnMButtonDblClk(nFlags, point);
}


void CWeek9Class3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag2 = 0;
	CView::OnLButtonDblClk(nFlags, point);
}
