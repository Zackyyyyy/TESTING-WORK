
// Week10Class3.h : Week10Class3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek10Class3App:
// �йش����ʵ�֣������ Week10Class3.cpp
//

class CWeek10Class3App : public CWinApp
{
public:
	CWeek10Class3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek10Class3App theApp;
