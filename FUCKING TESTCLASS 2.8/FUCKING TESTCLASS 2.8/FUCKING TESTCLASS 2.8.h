
// FUCKING TESTCLASS 2.8.h : FUCKING TESTCLASS 2.8 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CFUCKINGTESTCLASS28App:
// �йش����ʵ�֣������ FUCKING TESTCLASS 2.8.cpp
//

class CFUCKINGTESTCLASS28App : public CWinApp
{
public:
	CFUCKINGTESTCLASS28App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFUCKINGTESTCLASS28App theApp;
