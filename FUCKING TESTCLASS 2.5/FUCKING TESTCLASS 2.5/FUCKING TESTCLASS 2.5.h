
// FUCKING TESTCLASS 2.5.h : FUCKING TESTCLASS 2.5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CFUCKINGTESTCLASS25App:
// �йش����ʵ�֣������ FUCKING TESTCLASS 2.5.cpp
//

class CFUCKINGTESTCLASS25App : public CWinApp
{
public:
	CFUCKINGTESTCLASS25App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFUCKINGTESTCLASS25App theApp;
