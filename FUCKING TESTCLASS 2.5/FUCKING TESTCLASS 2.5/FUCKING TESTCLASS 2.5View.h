
// FUCKING TESTCLASS 2.5View.h : CFUCKINGTESTCLASS25View ��Ľӿ�
//

#pragma once


class CFUCKINGTESTCLASS25View : public CView
{
protected: // �������л�����
	CFUCKINGTESTCLASS25View();
	DECLARE_DYNCREATE(CFUCKINGTESTCLASS25View)

// ����
public:
	CFUCKINGTESTCLASS25Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CFUCKINGTESTCLASS25View();
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
};

#ifndef _DEBUG  // FUCKING TESTCLASS 2.5View.cpp �еĵ��԰汾
inline CFUCKINGTESTCLASS25Doc* CFUCKINGTESTCLASS25View::GetDocument() const
   { return reinterpret_cast<CFUCKINGTESTCLASS25Doc*>(m_pDocument); }
#endif

