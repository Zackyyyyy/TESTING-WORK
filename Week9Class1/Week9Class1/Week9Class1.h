
// Week9Class1.h : Week9Class1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek9Class1App:
// �йش����ʵ�֣������ Week9Class1.cpp
//

class CWeek9Class1App : public CWinApp
{
public:
	CWeek9Class1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek9Class1App theApp;
