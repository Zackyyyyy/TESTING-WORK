
// Week11Class2View.cpp : CWeek11Class2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week11Class2.h"
#endif

#include "Week11Class2Doc.h"
#include "Week11Class2View.h"
#include "MyDia.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek11Class2View

IMPLEMENT_DYNCREATE(CWeek11Class2View, CView)

BEGIN_MESSAGE_MAP(CWeek11Class2View, CView)
	ON_COMMAND(ID_OPENDIA, &CWeek11Class2View::OnOpendia)
	ON_COMMAND(ID_FILE_OPEN, &CWeek11Class2View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CWeek11Class2View::OnFileSaveAs)
END_MESSAGE_MAP()

// CWeek11Class2View 构造/析构

CWeek11Class2View::CWeek11Class2View()
	
{
	// TODO: 在此处添加构造代码

}

CWeek11Class2View::~CWeek11Class2View()
{
}

BOOL CWeek11Class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek11Class2View 绘制

void CWeek11Class2View::OnDraw(CDC* /*pDC*/)
{
	CWeek11Class2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek11Class2View 诊断

#ifdef _DEBUG
void CWeek11Class2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek11Class2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek11Class2Doc* CWeek11Class2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek11Class2Doc)));
	return (CWeek11Class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek11Class2View 消息处理程序


void CWeek11Class2View::OnOpendia()
{
	// TODO: 在此添加命令处理程序代码
	MyDia dlg;
	dlg.DoModal();
}


void CWeek11Class2View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		ifs >> s;
		MyDia dlg;
		dlg.s = CString(s.c_str());
		int r = dlg.DoModal();
		if (r == IDOK)
		{

		}
	}
}


void CWeek11Class2View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString s;
		s.Format(_T("C:\\Users\\39799\\Desktop\\学生名单.txt"));
		ofstream ofs(s);
		ofs << CT2A(cfd.GetPathName().GetString()) << endl;
	}
}
