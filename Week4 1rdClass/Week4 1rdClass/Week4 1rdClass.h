
// Week4 1rdClass.h : Week4 1rdClass Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek41rdClassApp:
// �йش����ʵ�֣������ Week4 1rdClass.cpp
//

class CWeek41rdClassApp : public CWinApp
{
public:
	CWeek41rdClassApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek41rdClassApp theApp;
