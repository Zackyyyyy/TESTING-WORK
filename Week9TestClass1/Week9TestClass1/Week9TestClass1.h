
// Week9TestClass1.h : Week9TestClass1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek9TestClass1App:
// �йش����ʵ�֣������ Week9TestClass1.cpp
//

class CWeek9TestClass1App : public CWinApp
{
public:
	CWeek9TestClass1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek9TestClass1App theApp;
