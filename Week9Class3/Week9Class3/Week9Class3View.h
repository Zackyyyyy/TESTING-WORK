
// Week9Class3View.h : CWeek9Class3View ��Ľӿ�
//

#pragma once
#include "atltypes.h"


class CWeek9Class3View : public CView
{
protected: // �������л�����
	CWeek9Class3View();
	DECLARE_DYNCREATE(CWeek9Class3View)

// ����
public:
	CWeek9Class3Doc* GetDocument() const;

// ����
public:
	int flag1;
	int flag2;
	int flag3;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek9Class3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonDblClk(UINT nFlags, CPoint point);
	CRect cr;
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week9Class3View.cpp �еĵ��԰汾
inline CWeek9Class3Doc* CWeek9Class3View::GetDocument() const
   { return reinterpret_cast<CWeek9Class3Doc*>(m_pDocument); }
#endif

