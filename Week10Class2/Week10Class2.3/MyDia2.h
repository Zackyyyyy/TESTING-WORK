#pragma once


// MyDia2 �Ի���

class MyDia2 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDia2)

public:
	MyDia2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDia2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
