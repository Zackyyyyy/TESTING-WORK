
// Week10Class2.3View.cpp : CWeek10Class23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week10Class2.3.h"
#endif

#include "Week10Class2.3Doc.h"
#include "Week10Class2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek10Class23View

IMPLEMENT_DYNCREATE(CWeek10Class23View, CView)

BEGIN_MESSAGE_MAP(CWeek10Class23View, CView)
	ON_COMMAND(ID_OENDIA2, &CWeek10Class23View::OnOendia2)
END_MESSAGE_MAP()

// CWeek10Class23View ����/����

CWeek10Class23View::CWeek10Class23View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek10Class23View::~CWeek10Class23View()
{
}

BOOL CWeek10Class23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek10Class23View ����

void CWeek10Class23View::OnDraw(CDC* /*pDC*/)
{
	CWeek10Class23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek10Class23View ���

#ifdef _DEBUG
void CWeek10Class23View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10Class23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Class23Doc* CWeek10Class23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Class23Doc)));
	return (CWeek10Class23Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10Class23View ��Ϣ�������


void CWeek10Class23View::OnOendia2()
{
	// TODO: �ڴ���������������
}
