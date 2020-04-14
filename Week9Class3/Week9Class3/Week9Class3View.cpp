
// Week9Class3View.cpp : CWeek9Class3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week9Class3.h"
#endif

#include "Week9Class3Doc.h"
#include "Week9Class3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9Class3View

IMPLEMENT_DYNCREATE(CWeek9Class3View, CView)

BEGIN_MESSAGE_MAP(CWeek9Class3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_MBUTTONDBLCLK()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek9Class3View ����/����

CWeek9Class3View::CWeek9Class3View()
{
	flag1 = 0;
	flag2 = 0;
	flag3 = 1;
	// TODO: �ڴ˴���ӹ������

}

CWeek9Class3View::~CWeek9Class3View()
{
}

BOOL CWeek9Class3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek9Class3View ����

void CWeek9Class3View::OnDraw(CDC* pDC)
{
	CWeek9Class3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect clientRect;
	GetClientRect(&clientRect);
	if (cr.top != clientRect.Height() / 2 - 20)
	{
		cr.top = clientRect.Height() / 2 - 20;
		cr.bottom = clientRect.Height() / 2 + 20;
	}
	if (flag3)
	{
		cr.left = 0;
		cr.top = clientRect.Height() / 2 - 20;
		cr.right = 40;
		cr.bottom = clientRect.Height() / 2 + 20;
		flag3 = 0;
	}
	SetTimer(0, 100, NULL);
	pDC->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek9Class3View ���

#ifdef _DEBUG
void CWeek9Class3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9Class3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9Class3Doc* CWeek9Class3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9Class3Doc)));
	return (CWeek9Class3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9Class3View ��Ϣ�������


void CWeek9Class3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect clientRect;
	GetClientRect(&clientRect);
	if (flag2)
	{
		if (flag1 == 0)
		{
			cr.left += 30;
			cr.right += 30;
			Invalidate();
			if (cr.right >= clientRect.right)
				flag1 = 1;
		}
		if (flag1 == 1)
		{
			cr.left -= 30;
			cr.right -= 30;
			Invalidate();
			if (cr.left <= clientRect.left)
				flag1 = 0;
		}
	}
	CView::OnTimer(nIDEvent);
}


void CWeek9Class3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag2 = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek9Class3View::OnMButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CView::OnMButtonDblClk(nFlags, point);
}


void CWeek9Class3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag2 = 0;
	CView::OnLButtonDblClk(nFlags, point);
}
