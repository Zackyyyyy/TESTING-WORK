
// Week6Class1View.cpp : CWeek6Class1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week6Class1.h"
#endif

#include "Week6Class1Doc.h"
#include "Week6Class1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek6Class1View

IMPLEMENT_DYNCREATE(CWeek6Class1View, CView)

BEGIN_MESSAGE_MAP(CWeek6Class1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek6Class1View::OnFileOpen)
END_MESSAGE_MAP()

// CWeek6Class1View ����/����

CWeek6Class1View::CWeek6Class1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek6Class1View::~CWeek6Class1View()
{
}

BOOL CWeek6Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek6Class1View ����

void CWeek6Class1View::OnDraw(CDC* /*pDC*/)
{
	CWeek6Class1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek6Class1View ���

#ifdef _DEBUG
void CWeek6Class1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek6Class1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek6Class1Doc* CWeek6Class1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek6Class1Doc)));
	return (CWeek6Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek6Class1View ��Ϣ�������


void CWeek6Class1View::OnFileOpen()
{
		CFileDialog cfd(true);
		int r = cfd.DoModal();
		CClientDC dc(this);
		CImage img;
		CString filename = cfd.GetPathName();
		//sx,syָ����ͼƬ���Ͻǵ�����
		CRect rect;
		GetClientRect(&rect);
		img.Load(filename);
		int w, h, sx, sy;
		if (r == IDOK);
	{
		
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		sx =rect.Width()/2-img.GetWidth()/2 ;
		sy = rect.Height() / 2 - img.GetHeight() / 2;
	}
	img.Draw(dc.m_hDC, sx, sy, img.GetWidth(),img.GetHeight());
	// TODO: �ڴ���������������
}
