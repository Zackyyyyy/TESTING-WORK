
// Week6Class1View.cpp : CWeek6Class1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week6Class1.h"
#endif

#include "Week6Class1Doc.h"
#include "Week6Class1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek6Class1View

IMPLEMENT_DYNCREATE(CWeek6Class1View, CView)

BEGIN_MESSAGE_MAP(CWeek6Class1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek6Class1View::OnFileOpen)
END_MESSAGE_MAP()

// CWeek6Class1View 构造/析构

CWeek6Class1View::CWeek6Class1View()
{
	// TODO: 在此处添加构造代码

}

CWeek6Class1View::~CWeek6Class1View()
{
}

BOOL CWeek6Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek6Class1View 绘制

void CWeek6Class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek6Class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek6Class1View 诊断

#ifdef _DEBUG
void CWeek6Class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek6Class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek6Class1Doc* CWeek6Class1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek6Class1Doc)));
	return (CWeek6Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek6Class1View 消息处理程序


void CWeek6Class1View::OnFileOpen()
{
		CFileDialog cfd(true);
		int r = cfd.DoModal();
		CClientDC dc(this);
		CImage img;
		CString filename = cfd.GetPathName();
		//sx,sy指的是图片左上角点坐标
		CRect rect;
		GetClientRect(&rect);
		img.Load(filename);
		int w, h, sx, sy;
		if (r == IDOK);
	{
		
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		sx =rect.Width()/2-img.GetWidth()/2 ;
		sy = rect.Height() / 2 - img.GetHeight() / 2;
	}
	img.Draw(dc.m_hDC, sx, sy, img.GetWidth(),img.GetHeight());
	// TODO: 在此添加命令处理程序代码
}
