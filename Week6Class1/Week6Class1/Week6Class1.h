
// Week6Class1.h : Week6Class1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek6Class1App:
// �йش����ʵ�֣������ Week6Class1.cpp
//

class CWeek6Class1App : public CWinApp
{
public:
	CWeek6Class1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek6Class1App theApp;
