
// Week10Class2.3.h : Week10Class2.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek10Class23App:
// �йش����ʵ�֣������ Week10Class2.3.cpp
//

class CWeek10Class23App : public CWinApp
{
public:
	CWeek10Class23App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek10Class23App theApp;
