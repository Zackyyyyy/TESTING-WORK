
// Week9TestClass2.h : Week9TestClass2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek9TestClass2App:
// �йش����ʵ�֣������ Week9TestClass2.cpp
//

class CWeek9TestClass2App : public CWinApp
{
public:
	CWeek9TestClass2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek9TestClass2App theApp;
