
// Week4TestClass3View.h : CWeek4TestClass3View ��Ľӿ�
//

#pragma once


class CWeek4TestClass3View : public CView
{
protected: // �������л�����
	CWeek4TestClass3View();
	DECLARE_DYNCREATE(CWeek4TestClass3View)

// ����
public:
	CWeek4TestClass3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4TestClass3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week4TestClass3View.cpp �еĵ��԰汾
inline CWeek4TestClass3Doc* CWeek4TestClass3View::GetDocument() const
   { return reinterpret_cast<CWeek4TestClass3Doc*>(m_pDocument); }
#endif

