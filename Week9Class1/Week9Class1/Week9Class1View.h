
// Week9Class1View.h : CWeek9Class1View ��Ľӿ�
//

#pragma once


class CWeek9Class1View : public CView
{
protected: // �������л�����
	CWeek9Class1View();
	DECLARE_DYNCREATE(CWeek9Class1View)

// ����
public:
	CWeek9Class1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek9Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week9Class1View.cpp �еĵ��԰汾
inline CWeek9Class1Doc* CWeek9Class1View::GetDocument() const
   { return reinterpret_cast<CWeek9Class1Doc*>(m_pDocument); }
#endif

