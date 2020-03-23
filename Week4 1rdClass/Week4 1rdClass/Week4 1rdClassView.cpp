
// Week4 1rdClassView.cpp : CWeek41rdClassView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week4 1rdClass.h"
#endif

#include "Week4 1rdClassDoc.h"
#include "Week4 1rdClassView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek41rdClassView

IMPLEMENT_DYNCREATE(CWeek41rdClassView, CView)

BEGIN_MESSAGE_MAP(CWeek41rdClassView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CWeek41rdClassView ����/����

CWeek41rdClassView::CWeek41rdClassView()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek41rdClassView::~CWeek41rdClassView()
{
}

BOOL CWeek41rdClassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek41rdClassView ����

void CWeek41rdClassView::OnDraw(CDC* pDC)
{
	CWeek41rdClassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_tagRec);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek41rdClassView ���

#ifdef _DEBUG
void CWeek41rdClassView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek41rdClassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek41rdClassDoc* CWeek41rdClassView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek41rdClassDoc)));
	return (CWeek41rdClassDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek41rdClassView ��Ϣ�������


void CWeek41rdClassView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek41rdClassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek41rdClassView::OnLButtonUp(UINT nFlags, CPoint point)
{
	CWeek41rdClassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->m_tagRec.right = point.x;
	pDoc->m_tagRec.bottom = point.y;
	InvalidateRect(NULL, FALSE);
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
}


void CWeek41rdClassView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	s.Format(_T("X=%d,Y=%d"), point.x, point.y);
	dc.TextOutW(100, 100, s);
	CView::OnMouseMove(nFlags, point);
}
