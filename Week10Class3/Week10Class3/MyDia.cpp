// MyDia.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week10Class3.h"
#include "MyDia.h"
#include "afxdialogex.h"


// MyDia �Ի���

IMPLEMENT_DYNAMIC(MyDia, CDialogEx)

MyDia::MyDia(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, l(0)
	, t(0)
	, r(0)
	, b(0)
{

}

MyDia::~MyDia()
{
}

void MyDia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, l);
	DDX_Text(pDX, IDC_EDIT2, t);
	DDX_Text(pDX, IDC_EDIT3, r);
	DDX_Text(pDX, IDC_EDIT4, b);
}


BEGIN_MESSAGE_MAP(MyDia, CDialogEx)
END_MESSAGE_MAP()


// MyDia ��Ϣ�������
