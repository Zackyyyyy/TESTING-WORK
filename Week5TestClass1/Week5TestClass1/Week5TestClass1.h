
// Week5TestClass1.h : Week5TestClass1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek5TestClass1App:
// �йش����ʵ�֣������ Week5TestClass1.cpp
//

class CWeek5TestClass1App : public CWinApp
{
public:
	CWeek5TestClass1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek5TestClass1App theApp;
