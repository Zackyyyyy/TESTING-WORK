
// Week4TestClass3.h : Week4TestClass3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek4TestClass3App:
// �йش����ʵ�֣������ Week4TestClass3.cpp
//

class CWeek4TestClass3App : public CWinApp
{
public:
	CWeek4TestClass3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek4TestClass3App theApp;
