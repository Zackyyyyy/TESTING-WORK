
// Week5TestClass1View.cpp : CWeek5TestClass1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5TestClass1.h"
#endif

#include "Week5TestClass1Doc.h"
#include "Week5TestClass1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5TestClass1View

IMPLEMENT_DYNCREATE(CWeek5TestClass1View, CView)

BEGIN_MESSAGE_MAP(CWeek5TestClass1View, CView)
	ON_COMMAND(ID_NameCheck, &CWeek5TestClass1View::OnNamecheck)
	ON_COMMAND(ID_PicCheck, &CWeek5TestClass1View::OnPiccheck)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_LineDraw, &CWeek5TestClass1View::OnLinedraw)
	ON_COMMAND(ID_RecDraw, &CWeek5TestClass1View::OnRecdraw)
	ON_COMMAND(ID_ElliDraw, &CWeek5TestClass1View::OnEllidraw)
END_MESSAGE_MAP()

// CWeek5TestClass1View ����/����

CWeek5TestClass1View::CWeek5TestClass1View()
{
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

	// TODO: �ڴ˴���ӹ������

}

CWeek5TestClass1View::~CWeek5TestClass1View()
{
}

BOOL CWeek5TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5TestClass1View ����

void CWeek5TestClass1View::OnDraw(CDC* /*pDC*/)
{
	CWeek5TestClass1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5TestClass1View ���

#ifdef _DEBUG
void CWeek5TestClass1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5TestClass1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5TestClass1Doc* CWeek5TestClass1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5TestClass1Doc)));
	return (CWeek5TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5TestClass1View ��Ϣ�������


void CWeek5TestClass1View::OnNamecheck()
{
	CClientDC dc(this);
	CString s;
	s.Format(_T("����Դ"));
	dc.TextOutW(200, 300, s);
	// TODO: �ڴ���������������
}


void CWeek5TestClass1View::OnPiccheck()
{
	CClientDC dc(this);
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	MemDC.BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	dc.BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

	// TODO: �ڴ���������������
}


void CWeek5TestClass1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek5TestClass1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p2 = point;
	CClientDC dc(this);
	if (line)
	{
		dc.MoveTo(p1);
		dc.LineTo(p2);
	}
	if (rectangle)
	{
		dc.Rectangle(p1.x, p1.y, p2.x, p2.y);
	}
	if (circle)
	{
		dc.Ellipse(p1.x, p1.y, p2.x, p2.y);
	}
	CView::OnLButtonUp(nFlags, point);
}


void CWeek5TestClass1View::OnLinedraw()
{
	line = true;
	rectangle = false;
	circle = false;
	// TODO: �ڴ���������������
}


void CWeek5TestClass1View::OnRecdraw()
{
	line = false;
	rectangle = true;
	circle = false;
	// TODO: �ڴ���������������
}


void CWeek5TestClass1View::OnEllidraw()
{
	line = false;
	rectangle = false;
	circle = true;
	// TODO: �ڴ���������������
}
