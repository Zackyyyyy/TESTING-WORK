
// Week9TestClass1View.h : CWeek9TestClass1View ��Ľӿ�
//

#pragma once


class CWeek9TestClass1View : public CView
{
protected: // �������л�����
	CWeek9TestClass1View();
	DECLARE_DYNCREATE(CWeek9TestClass1View)

// ����
public:
	CWeek9TestClass1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek9TestClass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week9TestClass1View.cpp �еĵ��԰汾
inline CWeek9TestClass1Doc* CWeek9TestClass1View::GetDocument() const
   { return reinterpret_cast<CWeek9TestClass1Doc*>(m_pDocument); }
#endif

