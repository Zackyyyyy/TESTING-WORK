
// Week5TestClass1View.cpp : CWeek5TestClass1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week5TestClass1.h"
#endif

#include "Week5TestClass1Doc.h"
#include "Week5TestClass1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5TestClass1View

IMPLEMENT_DYNCREATE(CWeek5TestClass1View, CView)

BEGIN_MESSAGE_MAP(CWeek5TestClass1View, CView)
	ON_COMMAND(ID_NameCheck, &CWeek5TestClass1View::OnNamecheck)
	ON_COMMAND(ID_PicCheck, &CWeek5TestClass1View::OnPiccheck)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_LineDraw, &CWeek5TestClass1View::OnLinedraw)
	ON_COMMAND(ID_RecDraw, &CWeek5TestClass1View::OnRecdraw)
	ON_COMMAND(ID_ElliDraw, &CWeek5TestClass1View::OnEllidraw)
END_MESSAGE_MAP()

// CWeek5TestClass1View 构造/析构

CWeek5TestClass1View::CWeek5TestClass1View()
{
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

	// TODO: 在此处添加构造代码

}

CWeek5TestClass1View::~CWeek5TestClass1View()
{
}

BOOL CWeek5TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek5TestClass1View 绘制

void CWeek5TestClass1View::OnDraw(CDC* /*pDC*/)
{
	CWeek5TestClass1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek5TestClass1View 诊断

#ifdef _DEBUG
void CWeek5TestClass1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5TestClass1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5TestClass1Doc* CWeek5TestClass1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5TestClass1Doc)));
	return (CWeek5TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5TestClass1View 消息处理程序


void CWeek5TestClass1View::OnNamecheck()
{
	CClientDC dc(this);
	CString s;
	s.Format(_T("张哲源"));
	dc.TextOutW(200, 300, s);
	// TODO: 在此添加命令处理程序代码
}


void CWeek5TestClass1View::OnPiccheck()
{
	CClientDC dc(this);
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	MemDC.BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	dc.BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

	// TODO: 在此添加命令处理程序代码
}


void CWeek5TestClass1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	p1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek5TestClass1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	p2 = point;
	CClientDC dc(this);
	if (line)
	{
		dc.MoveTo(p1);
		dc.LineTo(p2);
	}
	if (rectangle)
	{
		dc.Rectangle(p1.x, p1.y, p2.x, p2.y);
	}
	if (circle)
	{
		dc.Ellipse(p1.x, p1.y, p2.x, p2.y);
	}
	CView::OnLButtonUp(nFlags, point);
}


void CWeek5TestClass1View::OnLinedraw()
{
	line = true;
	rectangle = false;
	circle = false;
	// TODO: 在此添加命令处理程序代码
}


void CWeek5TestClass1View::OnRecdraw()
{
	line = false;
	rectangle = true;
	circle = false;
	// TODO: 在此添加命令处理程序代码
}


void CWeek5TestClass1View::OnEllidraw()
{
	line = false;
	rectangle = false;
	circle = true;
	// TODO: 在此添加命令处理程序代码
}
