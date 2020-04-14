
// Week9TestClass2View.cpp : CWeek9TestClass2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week9TestClass2.h"
#endif

#include "Week9TestClass2Doc.h"
#include "Week9TestClass2View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9TestClass2View

IMPLEMENT_DYNCREATE(CWeek9TestClass2View, CView)

BEGIN_MESSAGE_MAP(CWeek9TestClass2View, CView)
	ON_COMMAND(ID_OPENDIA, &CWeek9TestClass2View::OnOpendia)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek9TestClass2View 构造/析构

CWeek9TestClass2View::CWeek9TestClass2View()
	: s(_T(""))
	, flag(0)
{
	// TODO: 在此处添加构造代码
	
}

CWeek9TestClass2View::~CWeek9TestClass2View()
{
}

BOOL CWeek9TestClass2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek9TestClass2View 绘制

void CWeek9TestClass2View::OnDraw(CDC* /*pDC*/)
{
	CWeek9TestClass2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1)
	{
		MyDlg0 *pD = new MyDlg0;
		pD->a = s;
		pD->Create(IDD_DIALOG1);
		pD->ShowWindow(1);
		flag = 0;
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek9TestClass2View 诊断

#ifdef _DEBUG
void CWeek9TestClass2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9TestClass2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9TestClass2Doc* CWeek9TestClass2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9TestClass2Doc)));
	return (CWeek9TestClass2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9TestClass2View 消息处理程序


void CWeek9TestClass2View::OnOpendia()
{
	flag = 1;
	Invalidate();
	// TODO: 在此添加命令处理程序代码
}


void CWeek9TestClass2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	if (cfd.DoModal() == IDOK)
	{
		s = cfd.GetFileName();
	}
	GetDC()->TextOutW(400, 300, s);
	CView::OnLButtonDblClk(nFlags, point);
}
