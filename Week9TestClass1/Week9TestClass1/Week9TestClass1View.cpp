
// Week9TestClass1View.cpp : CWeek9TestClass1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week9TestClass1.h"
#endif

#include "Week9TestClass1Doc.h"
#include "Week9TestClass1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9TestClass1View

IMPLEMENT_DYNCREATE(CWeek9TestClass1View, CView)

BEGIN_MESSAGE_MAP(CWeek9TestClass1View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek9TestClass1View ����/����

CWeek9TestClass1View::CWeek9TestClass1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek9TestClass1View::~CWeek9TestClass1View()
{
}

BOOL CWeek9TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek9TestClass1View ����

void CWeek9TestClass1View::OnDraw(CDC* /*pDC*/)
{
	CWeek9TestClass1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek9TestClass1View ���

#ifdef _DEBUG
void CWeek9TestClass1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9TestClass1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9TestClass1Doc* CWeek9TestClass1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9TestClass1Doc)));
	return (CWeek9TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9TestClass1View ��Ϣ�������


void CWeek9TestClass1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CFileDialog cfd(true);
	if (cfd.DoModal() == IDOK)
	{
		s = cfd.GetFileName();
	}
	GetDC()->TextOutW(400, 300, s);
	CView::OnLButtonDblClk(nFlags, point);
}
