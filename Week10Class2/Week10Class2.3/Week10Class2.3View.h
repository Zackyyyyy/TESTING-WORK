
// Week10Class2.3View.h : CWeek10Class23View 类的接口
//

#pragma once


class CWeek10Class23View : public CView
{
protected: // 仅从序列化创建
	CWeek10Class23View();
	DECLARE_DYNCREATE(CWeek10Class23View)

// 特性
public:
	CWeek10Class23Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek10Class23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOendia2();
};

#ifndef _DEBUG  // Week10Class2.3View.cpp 中的调试版本
inline CWeek10Class23Doc* CWeek10Class23View::GetDocument() const
   { return reinterpret_cast<CWeek10Class23Doc*>(m_pDocument); }
#endif

