
// Week10Class2.3View.h : CWeek10Class23View ��Ľӿ�
//

#pragma once


class CWeek10Class23View : public CView
{
protected: // �������л�����
	CWeek10Class23View();
	DECLARE_DYNCREATE(CWeek10Class23View)

// ����
public:
	CWeek10Class23Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek10Class23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOendia2();
};

#ifndef _DEBUG  // Week10Class2.3View.cpp �еĵ��԰汾
inline CWeek10Class23Doc* CWeek10Class23View::GetDocument() const
   { return reinterpret_cast<CWeek10Class23Doc*>(m_pDocument); }
#endif

