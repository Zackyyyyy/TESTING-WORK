
// Week9Class1View.cpp : CWeek9Class1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week9Class1.h"
#endif

#include "Week9Class1Doc.h"
#include "Week9Class1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9Class1View

IMPLEMENT_DYNCREATE(CWeek9Class1View, CView)

BEGIN_MESSAGE_MAP(CWeek9Class1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek9Class1View ����/����

CWeek9Class1View::CWeek9Class1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek9Class1View::~CWeek9Class1View()
{
}

BOOL CWeek9Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek9Class1View ����

void CWeek9Class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek9Class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek9Class1View ���

#ifdef _DEBUG
void CWeek9Class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9Class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9Class1Doc* CWeek9Class1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9Class1Doc)));
	return (CWeek9Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9Class1View ��Ϣ�������


void CWeek9Class1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
