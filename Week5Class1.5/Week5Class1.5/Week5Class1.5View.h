
// Week5Class1.5View.h : CWeek5Class15View ��Ľӿ�
//

#pragma once


class CWeek5Class15View : public CView
{
protected: // �������л�����
	CWeek5Class15View();
	DECLARE_DYNCREATE(CWeek5Class15View)

// ����
public:
	CWeek5Class15Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek5Class15View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week5Class1.5View.cpp �еĵ��԰汾
inline CWeek5Class15Doc* CWeek5Class15View::GetDocument() const
   { return reinterpret_cast<CWeek5Class15Doc*>(m_pDocument); }
#endif

