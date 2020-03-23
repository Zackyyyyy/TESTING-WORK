
// FUCKING TESTCLASS 2.8View.h : CFUCKINGTESTCLASS28View 类的接口
//

#pragma once


class CFUCKINGTESTCLASS28View : public CView
{
protected: // 仅从序列化创建
	CFUCKINGTESTCLASS28View();
	DECLARE_DYNCREATE(CFUCKINGTESTCLASS28View)

// 特性
public:
	CFUCKINGTESTCLASS28Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CFUCKINGTESTCLASS28View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // FUCKING TESTCLASS 2.8View.cpp 中的调试版本
inline CFUCKINGTESTCLASS28Doc* CFUCKINGTESTCLASS28View::GetDocument() const
   { return reinterpret_cast<CFUCKINGTESTCLASS28Doc*>(m_pDocument); }
#endif

