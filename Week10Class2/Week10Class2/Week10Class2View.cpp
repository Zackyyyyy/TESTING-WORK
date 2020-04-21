
// Week10Class2View.cpp : CWeek10Class2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week10Class2.h"
#endif

#include "Week10Class2Doc.h"
#include "Week10Class2View.h"
#include "MyDia.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek10Class2View

IMPLEMENT_DYNCREATE(CWeek10Class2View, CView)

BEGIN_MESSAGE_MAP(CWeek10Class2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_OPENDIA, &CWeek10Class2View::OnOpendia)
END_MESSAGE_MAP()

// CWeek10Class2View ����/����

CWeek10Class2View::CWeek10Class2View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

CWeek10Class2View::~CWeek10Class2View()
{
}

BOOL CWeek10Class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek10Class2View ����

void CWeek10Class2View::OnDraw(CDC* pDC)
{
	CWeek10Class2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->c.left = s_point.x;
	pDoc->c.top = s_point.y;
	pDoc->c.right = e_point.x;
	pDoc->c.bottom = e_point.y;
	pDC->Ellipse(pDoc->c);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek10Class2View ���

#ifdef _DEBUG
void CWeek10Class2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10Class2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Class2Doc* CWeek10Class2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Class2Doc)));
	return (CWeek10Class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10Class2View ��Ϣ�������


void CWeek10Class2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	s_point = point;
	e_point = point;
		
	CView::OnLButtonDown(nFlags, point);
}


void CWeek10Class2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}


void CWeek10Class2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		e_point = point;
		Invalidate(false);
	}
	CView::OnMouseMove(nFlags, point);
}


void CWeek10Class2View::OnOpendia()
{
	// TODO: �ڴ���������������
	MyDia dia;
	int t = dia.DoModal();
	if (t == IDOK)
	{
		int le, to, rig, bott;
		le = dia.left;
		to = dia.top;
		rig = dia.right;
		bott = dia.bottom;
		CRect c;
		c.left = le;
		c.top = to;
		c.right = rig;
		c.bottom = bott;
		GetDC()->Ellipse(c);
	}

}
