
// Week9Class3.h : Week9Class3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek9Class3App:
// �йش����ʵ�֣������ Week9Class3.cpp
//

class CWeek9Class3App : public CWinApp
{
public:
	CWeek9Class3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek9Class3App theApp;
