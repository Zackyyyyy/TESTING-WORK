
// Week4TestClass3View.cpp : CWeek4TestClass3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week4TestClass3.h"
#endif

#include "Week4TestClass3Doc.h"
#include "Week4TestClass3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4TestClass3View

IMPLEMENT_DYNCREATE(CWeek4TestClass3View, CView)

BEGIN_MESSAGE_MAP(CWeek4TestClass3View, CView)
END_MESSAGE_MAP()

// CWeek4TestClass3View ����/����

CWeek4TestClass3View::CWeek4TestClass3View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek4TestClass3View::~CWeek4TestClass3View()
{
}

BOOL CWeek4TestClass3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4TestClass3View ����

void CWeek4TestClass3View::OnDraw(CDC* /*pDC*/)
{
	CWeek4TestClass3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4TestClass3View ���

#ifdef _DEBUG
void CWeek4TestClass3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4TestClass3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4TestClass3Doc* CWeek4TestClass3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4TestClass3Doc)));
	return (CWeek4TestClass3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4TestClass3View ��Ϣ�������
