
// Week5Class1.5.h : Week5Class1.5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek5Class15App:
// �йش����ʵ�֣������ Week5Class1.5.cpp
//

class CWeek5Class15App : public CWinApp
{
public:
	CWeek5Class15App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek5Class15App theApp;
