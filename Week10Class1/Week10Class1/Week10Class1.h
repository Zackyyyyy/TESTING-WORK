
// Week10Class1.h : Week10Class1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek10Class1App:
// �йش����ʵ�֣������ Week10Class1.cpp
//

class CWeek10Class1App : public CWinApp
{
public:
	CWeek10Class1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek10Class1App theApp;
