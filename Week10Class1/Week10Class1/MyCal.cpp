// MyCal.cpp : 实现文件
//

#include "stdafx.h"
#include "Week10Class1.h"
#include "MyCal.h"
#include "afxdialogex.h"


// MyCal 对话框

IMPLEMENT_DYNAMIC(MyCal, CDialogEx)

MyCal::MyCal(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

MyCal::~MyCal()
{
}

void MyCal::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
}


BEGIN_MESSAGE_MAP(MyCal, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyCal::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &MyCal::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &MyCal::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &MyCal::OnBnClickedButton4)
	ON_EN_CHANGE(IDC_EDIT1, &MyCal::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON6, &MyCal::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &MyCal::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON5, &MyCal::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON8, &MyCal::OnBnClickedButton8)
END_MESSAGE_MAP()


// MyCal 消息处理程序


void MyCal::OnBnClickedButton1()
{
	UpdateData(true);
	c = a + b;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void MyCal::OnBnClickedButton2()
{
	UpdateData(true);
	c = a - b;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void MyCal::OnBnClickedButton3()
{
	UpdateData(true);
	c = a*b;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void MyCal::OnBnClickedButton4()
{
	UpdateData(true);
	c = double(a / b);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void MyCal::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void MyCal::OnBnClickedButton6()
{
	UpdateData(true);
	a = sqrt(a);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void MyCal::OnBnClickedButton7()
{
	UpdateData(true);
	b = sqrt(b);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void MyCal::OnBnClickedButton5()
{
	UpdateData(true);
	a = 1 / a;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void MyCal::OnBnClickedButton8()
{
	UpdateData(true);
	b = 1 / b;
	UpdateData(true);
	// TODO: 在此添加控件通知处理程序代码
}
