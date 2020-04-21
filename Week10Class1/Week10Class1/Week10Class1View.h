
// Week10Class1View.h : CWeek10Class1View 类的接口
//

#pragma once


class CWeek10Class1View : public CView
{
protected: // 仅从序列化创建
	CWeek10Class1View();
	DECLARE_DYNCREATE(CWeek10Class1View)

// 特性
public:
	CWeek10Class1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek10Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpendia();
};

#ifndef _DEBUG  // Week10Class1View.cpp 中的调试版本
inline CWeek10Class1Doc* CWeek10Class1View::GetDocument() const
   { return reinterpret_cast<CWeek10Class1Doc*>(m_pDocument); }
#endif

