
// Week9TestClass2View.h : CWeek9TestClass2View ��Ľӿ�
//

#pragma once


class CWeek9TestClass2View : public CView
{
protected: // �������л�����
	CWeek9TestClass2View();
	DECLARE_DYNCREATE(CWeek9TestClass2View)

// ����
public:
	CWeek9TestClass2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek9TestClass2View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	CString s;
	int flag;
};

#ifndef _DEBUG  // Week9TestClass2View.cpp �еĵ��԰汾
inline CWeek9TestClass2Doc* CWeek9TestClass2View::GetDocument() const
   { return reinterpret_cast<CWeek9TestClass2Doc*>(m_pDocument); }
#endif

