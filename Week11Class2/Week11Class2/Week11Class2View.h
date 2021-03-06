
// Week11Class2View.h : CWeek11Class2View 类的接口
//

#pragma once


class CWeek11Class2View : public CView
{
protected: // 仅从序列化创建
	CWeek11Class2View();
	DECLARE_DYNCREATE(CWeek11Class2View)

// 特性
public:
	CWeek11Class2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek11Class2View();
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
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // Week11Class2View.cpp 中的调试版本
inline CWeek11Class2Doc* CWeek11Class2View::GetDocument() const
   { return reinterpret_cast<CWeek11Class2Doc*>(m_pDocument); }
#endif

