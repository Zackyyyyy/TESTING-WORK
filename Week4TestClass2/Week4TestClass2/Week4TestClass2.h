
// Week4TestClass2.h : Week4TestClass2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek4TestClass2App:
// �йش����ʵ�֣������ Week4TestClass2.cpp
//

class CWeek4TestClass2App : public CWinApp
{
public:
	CWeek4TestClass2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek4TestClass2App theApp;
