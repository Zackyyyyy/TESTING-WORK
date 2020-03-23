
// Week4TestClass2View.h : CWeek4TestClass2View 类的接口
//

#pragma once


class CWeek4TestClass2View : public CView
{
protected: // 仅从序列化创建
	CWeek4TestClass2View();
	DECLARE_DYNCREATE(CWeek4TestClass2View)

// 特性
public:
	CWeek4TestClass2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek4TestClass2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week4TestClass2View.cpp 中的调试版本
inline CWeek4TestClass2Doc* CWeek4TestClass2View::GetDocument() const
   { return reinterpret_cast<CWeek4TestClass2Doc*>(m_pDocument); }
#endif

