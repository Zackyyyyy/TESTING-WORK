
// Week10Class2View.h : CWeek10Class2View 类的接口
//

#pragma once


class CWeek10Class2View : public CView
{
protected: // 仅从序列化创建
	CWeek10Class2View();
	DECLARE_DYNCREATE(CWeek10Class2View)

// 特性
public:
	CWeek10Class2Doc* GetDocument() const;

// 操作
public:
	CPoint s_point;
	CPoint e_point;
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek10Class2View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnOpendia();
};

#ifndef _DEBUG  // Week10Class2View.cpp 中的调试版本
inline CWeek10Class2Doc* CWeek10Class2View::GetDocument() const
   { return reinterpret_cast<CWeek10Class2Doc*>(m_pDocument); }
#endif

