
// FUCKING TESTCLASS 2.5View.h : CFUCKINGTESTCLASS25View 类的接口
//

#pragma once


class CFUCKINGTESTCLASS25View : public CView
{
protected: // 仅从序列化创建
	CFUCKINGTESTCLASS25View();
	DECLARE_DYNCREATE(CFUCKINGTESTCLASS25View)

// 特性
public:
	CFUCKINGTESTCLASS25Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CFUCKINGTESTCLASS25View();
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
};

#ifndef _DEBUG  // FUCKING TESTCLASS 2.5View.cpp 中的调试版本
inline CFUCKINGTESTCLASS25Doc* CFUCKINGTESTCLASS25View::GetDocument() const
   { return reinterpret_cast<CFUCKINGTESTCLASS25Doc*>(m_pDocument); }
#endif

