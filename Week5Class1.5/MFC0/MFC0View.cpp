
// MFC0View.cpp : CMFC0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0.h"
#endif

#include "MFC0Doc.h"
#include "MFC0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0View

IMPLEMENT_DYNCREATE(CMFC0View, CView)

BEGIN_MESSAGE_MAP(CMFC0View, CView)
	ON_WM_TIMER()
	ON_COMMAND(ID_CircleCOLOR, &CMFC0View::OnCirclecolor)
END_MESSAGE_MAP()

// CMFC0View ����/����

CMFC0View::CMFC0View()
{
	set = true;
	N = 1;
	r = 50;
	// TODO: �ڴ˴���ӹ������

}

CMFC0View::~CMFC0View()
{
}

BOOL CMFC0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0View ����

void CMFC0View::OnDraw(CDC* /*pDC*/)
{
	CMFC0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC0View ���

#ifdef _DEBUG
void CMFC0View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0Doc* CMFC0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0Doc)));
	return (CMFC0Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0View ��Ϣ�������



void CMFC0View::OnTimer(UINT_PTR nIDEvent)
{
	CClientDC dc(this);
	GetClientRect(&rect);
	CPoint x = rect.CenterPoint();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	if (i == 0)
	{
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = dc.SelectObject(&pen);
		r = r + 50;
		dc.Ellipse(x.x - r, x.y - r, x.x + r, x.y + r);
	}
	CView::OnTimer(nIDEvent);
}


void CMFC0View::OnCirclecolor()
{
	// TODO: �ڴ���������������
	SetTimer(0, 500, NULL);
	OnTimer(0);
}
