// MyDia.cpp : 实现文件
//

#include "stdafx.h"
#include "Week10Class2.h"
#include "MyDia.h"
#include "afxdialogex.h"


// MyDia 对话框

IMPLEMENT_DYNAMIC(MyDia, CDialogEx)

MyDia::MyDia(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, left(0)
	, top(0)
	, right(0)
	, bottom(0)
{

}

MyDia::~MyDia()
{
}

void MyDia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, left);
	DDX_Text(pDX, IDC_EDIT2, top);
	DDX_Text(pDX, IDC_EDIT3, right);
	DDX_Text(pDX, IDC_EDIT4, bottom);
}


BEGIN_MESSAGE_MAP(MyDia, CDialogEx)
END_MESSAGE_MAP()


// MyDia 消息处理程序
