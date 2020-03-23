
// Week4TestClass2View.cpp : CWeek4TestClass2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4TestClass2.h"
#endif

#include "Week4TestClass2Doc.h"
#include "Week4TestClass2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4TestClass2View

IMPLEMENT_DYNCREATE(CWeek4TestClass2View, CView)

BEGIN_MESSAGE_MAP(CWeek4TestClass2View, CView)
	ON_WM_KEYDOWN()
//	ON_WM_MBUTTONDOWN()
ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek4TestClass2View 构造/析构

CWeek4TestClass2View::CWeek4TestClass2View()
{
	// TODO: 在此处添加构造代码

}

CWeek4TestClass2View::~CWeek4TestClass2View()
{
}

BOOL CWeek4TestClass2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4TestClass2View 绘制

void CWeek4TestClass2View::OnDraw(CDC* pDC)
{
	CWeek4TestClass2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_crlRect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4TestClass2View 诊断

#ifdef _DEBUG
void CWeek4TestClass2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4TestClass2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4TestClass2Doc* CWeek4TestClass2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4TestClass2Doc)));
	return (CWeek4TestClass2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4TestClass2View 消息处理程序


void CWeek4TestClass2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek4TestClass2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
	CRect clientRec;
	CClientDC dc(this);
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if(pDoc->m_crlRect.left>0)
		{
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if(pDoc->m_crlRect.right<=(clientRec.right-clientRec.left))
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->m_crlRect.top > 0)
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crlRect.bottom > 0)
		{
			pDoc->m_crlRect.top += 5;
			pDoc->m_crlRect.bottom += 5;
		}
		break;
	case VK_END:
		if(pDoc->m_crlRect)
		{
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.top -= 5;
		}
		break;
	case VK_HOME:
		if (pDoc->m_crlRect)
		{
			pDoc->m_crlRect.right -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
	}
	InvalidateRect(NULL, TRUE);
}




void CWeek4TestClass2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek4TestClass2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_crlRect.left = 30;
	pDoc->m_crlRect.right = 80;
	pDoc->m_crlRect.top = 30;
	pDoc->m_crlRect.bottom = 80;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}
