
// Week10Class3View.h : CWeek10Class3View 类的接口
//

#pragma once


class CWeek10Class3View : public CView
{
protected: // 仅从序列化创建
	CWeek10Class3View();
	DECLARE_DYNCREATE(CWeek10Class3View)

// 特性
public:
	CWeek10Class3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek10Class3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnChangcol();
	int flag=0;
	CPoint pt;
	afx_msg void OnOpendra();
};

#ifndef _DEBUG  // Week10Class3View.cpp 中的调试版本
inline CWeek10Class3Doc* CWeek10Class3View::GetDocument() const
   { return reinterpret_cast<CWeek10Class3Doc*>(m_pDocument); }
#endif

