
// Week9TestClass2View.h : CWeek9TestClass2View 类的接口
//

#pragma once


class CWeek9TestClass2View : public CView
{
protected: // 仅从序列化创建
	CWeek9TestClass2View();
	DECLARE_DYNCREATE(CWeek9TestClass2View)

// 特性
public:
	CWeek9TestClass2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek9TestClass2View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	CString s;
	int flag;
};

#ifndef _DEBUG  // Week9TestClass2View.cpp 中的调试版本
inline CWeek9TestClass2Doc* CWeek9TestClass2View::GetDocument() const
   { return reinterpret_cast<CWeek9TestClass2Doc*>(m_pDocument); }
#endif

