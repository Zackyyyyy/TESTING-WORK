
// Week10Class1View.h : CWeek10Class1View ��Ľӿ�
//

#pragma once


class CWeek10Class1View : public CView
{
protected: // �������л�����
	CWeek10Class1View();
	DECLARE_DYNCREATE(CWeek10Class1View)

// ����
public:
	CWeek10Class1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek10Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpendia();
};

#ifndef _DEBUG  // Week10Class1View.cpp �еĵ��԰汾
inline CWeek10Class1Doc* CWeek10Class1View::GetDocument() const
   { return reinterpret_cast<CWeek10Class1Doc*>(m_pDocument); }
#endif

