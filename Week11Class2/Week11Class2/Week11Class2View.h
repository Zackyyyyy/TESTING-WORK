
// Week11Class2View.h : CWeek11Class2View ��Ľӿ�
//

#pragma once


class CWeek11Class2View : public CView
{
protected: // �������л�����
	CWeek11Class2View();
	DECLARE_DYNCREATE(CWeek11Class2View)

// ����
public:
	CWeek11Class2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek11Class2View();
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
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // Week11Class2View.cpp �еĵ��԰汾
inline CWeek11Class2Doc* CWeek11Class2View::GetDocument() const
   { return reinterpret_cast<CWeek11Class2Doc*>(m_pDocument); }
#endif

