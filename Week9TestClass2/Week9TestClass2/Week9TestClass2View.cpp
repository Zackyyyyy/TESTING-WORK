
// Week9TestClass2View.cpp : CWeek9TestClass2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CWeek9TestClass2View ����/����

CWeek9TestClass2View::CWeek9TestClass2View()
	: s(_T(""))
	, flag(0)
{
	// TODO: �ڴ˴���ӹ������
	
}

CWeek9TestClass2View::~CWeek9TestClass2View()
{
}

BOOL CWeek9TestClass2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek9TestClass2View ����

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
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek9TestClass2View ���

#ifdef _DEBUG
void CWeek9TestClass2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9TestClass2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9TestClass2Doc* CWeek9TestClass2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9TestClass2Doc)));
	return (CWeek9TestClass2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9TestClass2View ��Ϣ�������


void CWeek9TestClass2View::OnOpendia()
{
	flag = 1;
	Invalidate();
	// TODO: �ڴ���������������
}


void CWeek9TestClass2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	if (cfd.DoModal() == IDOK)
	{
		s = cfd.GetFileName();
	}
	GetDC()->TextOutW(400, 300, s);
	CView::OnLButtonDblClk(nFlags, point);
}
