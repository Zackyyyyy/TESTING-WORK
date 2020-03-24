
// Week5TestClass1View.h : CWeek5TestClass1View 类的接口
//

#pragma once


class CWeek5TestClass1View : public CView
{
protected: // 仅从序列化创建
	CWeek5TestClass1View();
	DECLARE_DYNCREATE(CWeek5TestClass1View)

// 特性
public:
	CWeek5TestClass1Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
	bool line, rectangle, circle;
	CPoint p1, p2;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek5TestClass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNamecheck();
	afx_msg void OnPiccheck();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLinedraw();
	afx_msg void OnRecdraw();
	afx_msg void OnEllidraw();
};

#ifndef _DEBUG  // Week5TestClass1View.cpp 中的调试版本
inline CWeek5TestClass1Doc* CWeek5TestClass1View::GetDocument() const
   { return reinterpret_cast<CWeek5TestClass1Doc*>(m_pDocument); }
#endif

