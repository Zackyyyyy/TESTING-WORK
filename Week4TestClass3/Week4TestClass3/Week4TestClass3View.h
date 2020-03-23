
// Week4TestClass3View.h : CWeek4TestClass3View 类的接口
//

#pragma once


class CWeek4TestClass3View : public CView
{
protected: // 仅从序列化创建
	CWeek4TestClass3View();
	DECLARE_DYNCREATE(CWeek4TestClass3View)

// 特性
public:
	CWeek4TestClass3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek4TestClass3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week4TestClass3View.cpp 中的调试版本
inline CWeek4TestClass3Doc* CWeek4TestClass3View::GetDocument() const
   { return reinterpret_cast<CWeek4TestClass3Doc*>(m_pDocument); }
#endif

