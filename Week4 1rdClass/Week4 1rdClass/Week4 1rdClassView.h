
// Week4 1rdClassView.h : CWeek41rdClassView 类的接口
//

#pragma once


class CWeek41rdClassView : public CView
{
protected: // 仅从序列化创建
	CWeek41rdClassView();
	DECLARE_DYNCREATE(CWeek41rdClassView)

// 特性
public:
	CWeek41rdClassDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek41rdClassView();
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
};

#ifndef _DEBUG  // Week4 1rdClassView.cpp 中的调试版本
inline CWeek41rdClassDoc* CWeek41rdClassView::GetDocument() const
   { return reinterpret_cast<CWeek41rdClassDoc*>(m_pDocument); }
#endif

