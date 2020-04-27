
// Week11Class2View.cpp : CWeek11Class2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CWeek11Class2View ����/����

CWeek11Class2View::CWeek11Class2View()
	
{
	// TODO: �ڴ˴���ӹ������

}

CWeek11Class2View::~CWeek11Class2View()
{
}

BOOL CWeek11Class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek11Class2View ����

void CWeek11Class2View::OnDraw(CDC* /*pDC*/)
{
	CWeek11Class2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek11Class2View ���

#ifdef _DEBUG
void CWeek11Class2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek11Class2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek11Class2Doc* CWeek11Class2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek11Class2Doc)));
	return (CWeek11Class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek11Class2View ��Ϣ�������


void CWeek11Class2View::OnOpendia()
{
	// TODO: �ڴ���������������
	MyDia dlg;
	dlg.DoModal();
}


void CWeek11Class2View::OnFileOpen()
{
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString s;
		s.Format(_T("C:\\Users\\39799\\Desktop\\ѧ������.txt"));
		ofstream ofs(s);
		ofs << CT2A(cfd.GetPathName().GetString()) << endl;
	}
}
