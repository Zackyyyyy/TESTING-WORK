
// Week10Class3View.h : CWeek10Class3View ��Ľӿ�
//

#pragma once


class CWeek10Class3View : public CView
{
protected: // �������л�����
	CWeek10Class3View();
	DECLARE_DYNCREATE(CWeek10Class3View)

// ����
public:
	CWeek10Class3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek10Class3View();
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
	afx_msg void OnChangcol();
	int flag=0;
	CPoint pt;
	afx_msg void OnOpendra();
};

#ifndef _DEBUG  // Week10Class3View.cpp �еĵ��԰汾
inline CWeek10Class3Doc* CWeek10Class3View::GetDocument() const
   { return reinterpret_cast<CWeek10Class3Doc*>(m_pDocument); }
#endif

