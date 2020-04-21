// MyDia2.cpp : 实现文件
//

#include "stdafx.h"
#include "Week10Class2.3.h"
#include "MyDia2.h"
#include "afxdialogex.h"


// MyDia2 对话框

IMPLEMENT_DYNAMIC(MyDia2, CDialogEx)

MyDia2::MyDia2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDia2::~MyDia2()
{
}

void MyDia2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDia2, CDialogEx)
END_MESSAGE_MAP()


// MyDia2 消息处理程序
