
// Week11Class2.h : Week11Class2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek11Class2App:
// �йش����ʵ�֣������ Week11Class2.cpp
//

class CWeek11Class2App : public CWinApp
{
public:
	CWeek11Class2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek11Class2App theApp;
