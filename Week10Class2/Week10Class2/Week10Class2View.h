
// Week10Class2View.h : CWeek10Class2View ��Ľӿ�
//

#pragma once


class CWeek10Class2View : public CView
{
protected: // �������л�����
	CWeek10Class2View();
	DECLARE_DYNCREATE(CWeek10Class2View)

// ����
public:
	CWeek10Class2Doc* GetDocument() const;

// ����
public:
	CPoint s_point;
	CPoint e_point;
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek10Class2View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnOpendia();
};

#ifndef _DEBUG  // Week10Class2View.cpp �еĵ��԰汾
inline CWeek10Class2Doc* CWeek10Class2View::GetDocument() const
   { return reinterpret_cast<CWeek10Class2Doc*>(m_pDocument); }
#endif

