
// Week6Class1View.h : CWeek6Class1View 类的接口
//

#pragma once


class CWeek6Class1View : public CView
{
protected: // 仅从序列化创建
	CWeek6Class1View();
	DECLARE_DYNCREATE(CWeek6Class1View)

// 特性
public:
	CWeek6Class1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek6Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // Week6Class1View.cpp 中的调试版本
inline CWeek6Class1Doc* CWeek6Class1View::GetDocument() const
   { return reinterpret_cast<CWeek6Class1Doc*>(m_pDocument); }
#endif

