
// Week4 1rdClassView.h : CWeek41rdClassView ��Ľӿ�
//

#pragma once


class CWeek41rdClassView : public CView
{
protected: // �������л�����
	CWeek41rdClassView();
	DECLARE_DYNCREATE(CWeek41rdClassView)

// ����
public:
	CWeek41rdClassDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek41rdClassView();
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
};

#ifndef _DEBUG  // Week4 1rdClassView.cpp �еĵ��԰汾
inline CWeek41rdClassDoc* CWeek41rdClassView::GetDocument() const
   { return reinterpret_cast<CWeek41rdClassDoc*>(m_pDocument); }
#endif

