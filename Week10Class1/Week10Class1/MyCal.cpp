// MyCal.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week10Class1.h"
#include "MyCal.h"
#include "afxdialogex.h"


// MyCal �Ի���

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


// MyCal ��Ϣ�������


void MyCal::OnBnClickedButton1()
{
	UpdateData(true);
	c = a + b;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnBnClickedButton2()
{
	UpdateData(true);
	c = a - b;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnBnClickedButton3()
{
	UpdateData(true);
	c = a*b;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnBnClickedButton4()
{
	UpdateData(true);
	c = double(a / b);
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnBnClickedButton6()
{
	UpdateData(true);
	a = sqrt(a);
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnBnClickedButton7()
{
	UpdateData(true);
	b = sqrt(b);
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnBnClickedButton5()
{
	UpdateData(true);
	a = 1 / a;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyCal::OnBnClickedButton8()
{
	UpdateData(true);
	b = 1 / b;
	UpdateData(true);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
