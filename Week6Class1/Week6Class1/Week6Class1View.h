
// Week6Class1View.h : CWeek6Class1View ��Ľӿ�
//

#pragma once


class CWeek6Class1View : public CView
{
protected: // �������л�����
	CWeek6Class1View();
	DECLARE_DYNCREATE(CWeek6Class1View)

// ����
public:
	CWeek6Class1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek6Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // Week6Class1View.cpp �еĵ��԰汾
inline CWeek6Class1Doc* CWeek6Class1View::GetDocument() const
   { return reinterpret_cast<CWeek6Class1Doc*>(m_pDocument); }
#endif

