
// Week10Class1View.cpp : CWeek10Class1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week10Class1.h"
#endif

#include "Week10Class1Doc.h"
#include "Week10Class1View.h"
#include "MyCal.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek10Class1View

IMPLEMENT_DYNCREATE(CWeek10Class1View, CView)

BEGIN_MESSAGE_MAP(CWeek10Class1View, CView)
	ON_COMMAND(ID_OPENDIA, &CWeek10Class1View::OnOpendia)
END_MESSAGE_MAP()

// CWeek10Class1View ����/����

CWeek10Class1View::CWeek10Class1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek10Class1View::~CWeek10Class1View()
{
}

BOOL CWeek10Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek10Class1View ����

void CWeek10Class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek10Class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek10Class1View ���

#ifdef _DEBUG
void CWeek10Class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10Class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Class1Doc* CWeek10Class1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Class1Doc)));
	return (CWeek10Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10Class1View ��Ϣ�������


void CWeek10Class1View::OnOpendia()
{
	MyCal* cal = new MyCal;
	cal->Create(MAKEINTRESOURCE(IDD_DIALOG1));
	cal->ShowWindow(1);
	// TODO: �ڴ���������������
}
