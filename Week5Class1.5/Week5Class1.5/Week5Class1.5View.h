
// Week5Class1.5View.h : CWeek5Class15View 类的接口
//

#pragma once


class CWeek5Class15View : public CView
{
protected: // 仅从序列化创建
	CWeek5Class15View();
	DECLARE_DYNCREATE(CWeek5Class15View)

// 特性
public:
	CWeek5Class15Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek5Class15View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week5Class1.5View.cpp 中的调试版本
inline CWeek5Class15Doc* CWeek5Class15View::GetDocument() const
   { return reinterpret_cast<CWeek5Class15Doc*>(m_pDocument); }
#endif

