
// Week5TestClass1View.h : CWeek5TestClass1View ��Ľӿ�
//

#pragma once


class CWeek5TestClass1View : public CView
{
protected: // �������л�����
	CWeek5TestClass1View();
	DECLARE_DYNCREATE(CWeek5TestClass1View)

// ����
public:
	CWeek5TestClass1Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
	bool line, rectangle, circle;
	CPoint p1, p2;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek5TestClass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNamecheck();
	afx_msg void OnPiccheck();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLinedraw();
	afx_msg void OnRecdraw();
	afx_msg void OnEllidraw();
};

#ifndef _DEBUG  // Week5TestClass1View.cpp �еĵ��԰汾
inline CWeek5TestClass1Doc* CWeek5TestClass1View::GetDocument() const
   { return reinterpret_cast<CWeek5TestClass1Doc*>(m_pDocument); }
#endif

