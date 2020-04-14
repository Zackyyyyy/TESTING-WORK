
// Week9TestClass1View.cpp : CWeek9TestClass1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week9TestClass1.h"
#endif

#include "Week9TestClass1Doc.h"
#include "Week9TestClass1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9TestClass1View

IMPLEMENT_DYNCREATE(CWeek9TestClass1View, CView)

BEGIN_MESSAGE_MAP(CWeek9TestClass1View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek9TestClass1View 构造/析构

CWeek9TestClass1View::CWeek9TestClass1View()
{
	// TODO: 在此处添加构造代码

}

CWeek9TestClass1View::~CWeek9TestClass1View()
{
}

BOOL CWeek9TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek9TestClass1View 绘制

void CWeek9TestClass1View::OnDraw(CDC* /*pDC*/)
{
	CWeek9TestClass1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek9TestClass1View 诊断

#ifdef _DEBUG
void CWeek9TestClass1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9TestClass1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9TestClass1Doc* CWeek9TestClass1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9TestClass1Doc)));
	return (CWeek9TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9TestClass1View 消息处理程序


void CWeek9TestClass1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CFileDialog cfd(true);
	if (cfd.DoModal() == IDOK)
	{
		s = cfd.GetFileName();
	}
	GetDC()->TextOutW(400, 300, s);
	CView::OnLButtonDblClk(nFlags, point);
}
