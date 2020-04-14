
// Week9Class3View.h : CWeek9Class3View 类的接口
//

#pragma once
#include "atltypes.h"


class CWeek9Class3View : public CView
{
protected: // 仅从序列化创建
	CWeek9Class3View();
	DECLARE_DYNCREATE(CWeek9Class3View)

// 特性
public:
	CWeek9Class3Doc* GetDocument() const;

// 操作
public:
	int flag1;
	int flag2;
	int flag3;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek9Class3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonDblClk(UINT nFlags, CPoint point);
	CRect cr;
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week9Class3View.cpp 中的调试版本
inline CWeek9Class3Doc* CWeek9Class3View::GetDocument() const
   { return reinterpret_cast<CWeek9Class3Doc*>(m_pDocument); }
#endif

