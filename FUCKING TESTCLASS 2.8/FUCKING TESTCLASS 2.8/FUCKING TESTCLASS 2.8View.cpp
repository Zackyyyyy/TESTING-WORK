
// FUCKING TESTCLASS 2.8View.cpp : CFUCKINGTESTCLASS28View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "FUCKING TESTCLASS 2.8.h"
#endif

#include "FUCKING TESTCLASS 2.8Doc.h"
#include "FUCKING TESTCLASS 2.8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFUCKINGTESTCLASS28View

IMPLEMENT_DYNCREATE(CFUCKINGTESTCLASS28View, CView)

BEGIN_MESSAGE_MAP(CFUCKINGTESTCLASS28View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CFUCKINGTESTCLASS28View ����/����

CFUCKINGTESTCLASS28View::CFUCKINGTESTCLASS28View()
{
	// TODO: �ڴ˴���ӹ������

}

CFUCKINGTESTCLASS28View::~CFUCKINGTESTCLASS28View()
{
}

BOOL CFUCKINGTESTCLASS28View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CFUCKINGTESTCLASS28View ����

void CFUCKINGTESTCLASS28View::OnDraw(CDC* pDC)
{
	CFUCKINGTESTCLASS28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect A(100, 100, 200, 200);
	CRect B(300, 300, 400, 400);
	CRect C(500, 500, 600, 600);
	pDC->Rectangle(A);
	pDC->Rectangle(B);
	pDC->Rectangle(C);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CFUCKINGTESTCLASS28View ���

#ifdef _DEBUG
void CFUCKINGTESTCLASS28View::AssertValid() const
{
	CView::AssertValid();
}

void CFUCKINGTESTCLASS28View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFUCKINGTESTCLASS28Doc* CFUCKINGTESTCLASS28View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFUCKINGTESTCLASS28Doc)));
	return (CFUCKINGTESTCLASS28Doc*)m_pDocument;
}
#endif //_DEBUG


// CFUCKINGTESTCLASS28View ��Ϣ�������


void CFUCKINGTESTCLASS28View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString i;
	CString o;
	CFUCKINGTESTCLASS28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (point.x >= 100 && point.x <= 200 && point.y >= 100 && point.y <= 200)
	{
		pDoc->a = rand() % 50;
		i.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, i);
	}
	else if (point.x >= 300 && point.x <= 400 && point.y >= 300 && point.y <= 400)
	{
		pDoc->b = rand() % 50;
		o.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, o);
	}
	else
	{
		CString g;
		g = (_T("��Ч"));
		dc.TextOutW(point.x, point.y, g);
	}
	CView::OnLButtonDown(nFlags, point);
}


void CFUCKINGTESTCLASS28View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFUCKINGTESTCLASS28Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CClientDC dc(this);
	if (point.x >= 500 && point.x <= 600 && point.y >= 500 && point.y <= 600)
	{
		CString a;
		pDoc->c = pDoc->a + pDoc->b;
		a.Format(_T("%d"), pDoc->c);
		dc.TextOutW(point.x, point.y, a);
	}
	else
	{
		CString a;
		a = (_T("��Ч"));
		dc.TextOutW(point.x, point.y, a);
	}
	CView::OnRButtonDown(nFlags, point);
}
