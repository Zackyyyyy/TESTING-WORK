
// Week10Class3View.cpp : CWeek10Class3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week10Class3.h"
#endif

#include "Week10Class3Doc.h"
#include "Week10Class3View.h"
#include "MyDia.h"
#include "MyDia2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek10Class3View

IMPLEMENT_DYNCREATE(CWeek10Class3View, CView)

BEGIN_MESSAGE_MAP(CWeek10Class3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_CHANGCOL, &CWeek10Class3View::OnChangcol)
	ON_COMMAND(ID_OPENDRA, &CWeek10Class3View::OnOpendra)
END_MESSAGE_MAP()

// CWeek10Class3View ����/����

CWeek10Class3View::CWeek10Class3View()
	: flag(0)
{
	// TODO: �ڴ˴���ӹ������

}

CWeek10Class3View::~CWeek10Class3View()
{
}

BOOL CWeek10Class3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek10Class3View ����

void CWeek10Class3View::OnDraw(CDC* /*pDC*/)
{
	CWeek10Class3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (flag == 1)
	{

		CPen p1;
		p1.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		CClientDC dc(this);
		dc.SelectObject(&p1);
		dc.SelectStockObject(NULL_BRUSH);
		for (int i = 0; i < pDoc->cr.GetSize(); i++)
		{
			dc.Ellipse(pDoc->cr[i]);
			if (pt.x > pDoc->cr[i].left&&pt.x<pDoc->cr[i].right&&pt.y>pDoc->cr[i].top&&pt.y < pDoc->cr[i].bottom)
			{
				pDoc->a[i] = 1;
				dc.Rectangle(pDoc->cr[i]);
				for (int j = 0; j < pDoc->cr.GetSize(); j++)
				{
					if (j != i)
					{
						pDoc->a[j] = 0;
					}
				}
			}
		}
		flag = 0;
	}

}


// CWeek10Class3View ���

#ifdef _DEBUG
void CWeek10Class3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek10Class3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek10Class3Doc* CWeek10Class3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek10Class3Doc)));
	return (CWeek10Class3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek10Class3View ��Ϣ�������


void CWeek10Class3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	pt = point;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
	CView::OnLButtonDown(nFlags, point);
}


void CWeek10Class3View::OnChangcol()
{
	// TODO: �ڴ���������������
	MyDia2 color;
	int t = color.DoModal();
	if (t == IDOK)
	{
		CWeek10Class3Doc* pDoc = GetDocument();
		for (int i = 0; i < pDoc->cr.GetSize(); i++)
		{
			if (pDoc->a[i] == 1)
			{
				CBrush brush;
				brush.CreateSolidBrush(RGB(color.r, color.g, color.b));
				CClientDC dc(this);
				dc.SelectObject(&brush);
				dc.Ellipse(pDoc->cr[i]);
			}
		}
	}
}


void CWeek10Class3View::OnOpendra()
{
	// TODO: �ڴ���������������
	MyDia dlg;
	int t = dlg.DoModal();
	CWeek10Class3Doc* pDoc = GetDocument();
	if (t == IDOK)
	{
		CRect c;
		c.left = dlg.l;
		c.top = dlg.t;
		c.right = dlg.r;
		c.bottom = dlg.b;
		pDoc->cr.Add(c);
		GetDC()->Ellipse(c);
	}
}
