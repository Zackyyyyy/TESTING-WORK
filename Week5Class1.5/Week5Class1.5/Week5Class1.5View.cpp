
// Week5Class1.5View.cpp : CWeek5Class15View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5Class1.5.h"
#endif

#include "Week5Class1.5Doc.h"
#include "Week5Class1.5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5Class15View

IMPLEMENT_DYNCREATE(CWeek5Class15View, CView)

BEGIN_MESSAGE_MAP(CWeek5Class15View, CView)
END_MESSAGE_MAP()

// CWeek5Class15View ����/����

CWeek5Class15View::CWeek5Class15View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek5Class15View::~CWeek5Class15View()
{
}

BOOL CWeek5Class15View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5Class15View ����

void CWeek5Class15View::OnDraw(CDC* /*pDC*/)
{
	CWeek5Class15Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5Class15View ���

#ifdef _DEBUG
void CWeek5Class15View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5Class15View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5Class15Doc* CWeek5Class15View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5Class15Doc)));
	return (CWeek5Class15Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5Class15View ��Ϣ�������
