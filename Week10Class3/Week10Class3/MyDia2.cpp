// MyDia2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week10Class3.h"
#include "MyDia2.h"
#include "afxdialogex.h"


// MyDia2 �Ի���

IMPLEMENT_DYNAMIC(MyDia2, CDialogEx)

MyDia2::MyDia2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, r(0)
	, g(0)
	, b(0)
{

}

MyDia2::~MyDia2()
{
}

void MyDia2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r);
	DDX_Text(pDX, IDC_EDIT2, g);
	DDX_Text(pDX, IDC_EDIT3, b);
}


BEGIN_MESSAGE_MAP(MyDia2, CDialogEx)
END_MESSAGE_MAP()


// MyDia2 ��Ϣ�������
