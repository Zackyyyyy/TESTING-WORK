
// FUCKING TESTCLASS 2.5View.cpp : CFUCKINGTESTCLASS25View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "FUCKING TESTCLASS 2.5.h"
#endif

#include "FUCKING TESTCLASS 2.5Doc.h"
#include "FUCKING TESTCLASS 2.5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFUCKINGTESTCLASS25View

IMPLEMENT_DYNCREATE(CFUCKINGTESTCLASS25View, CView)

BEGIN_MESSAGE_MAP(CFUCKINGTESTCLASS25View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CFUCKINGTESTCLASS25View ����/����

CFUCKINGTESTCLASS25View::CFUCKINGTESTCLASS25View()
{
	// TODO: �ڴ˴���ӹ������

}

CFUCKINGTESTCLASS25View::~CFUCKINGTESTCLASS25View()
{
}

BOOL CFUCKINGTESTCLASS25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CFUCKINGTESTCLASS25View ����

void CFUCKINGTESTCLASS25View::OnDraw(CDC* /*pDC*/)
{
	CFUCKINGTESTCLASS25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CFUCKINGTESTCLASS25View ���

#ifdef _DEBUG
void CFUCKINGTESTCLASS25View::AssertValid() const
{
	CView::AssertValid();
}

void CFUCKINGTESTCLASS25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFUCKINGTESTCLASS25Doc* CFUCKINGTESTCLASS25View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFUCKINGTESTCLASS25Doc)));
	return (CFUCKINGTESTCLASS25Doc*)m_pDocument;
}
#endif //_DEBUG


// CFUCKINGTESTCLASS25View ��Ϣ�������


void CFUCKINGTESTCLASS25View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CString  S;
	CFUCKINGTESTCLASS25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	int D = pDoc->A + pDoc->B;
	S.Format(_T("A+B=%d"), D);
	CClientDC dc(this);
	dc.TextOutW(200, 300, S);
}
