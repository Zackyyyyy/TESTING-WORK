// MyDlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week9TestClass2.h"
#include "MyDlg0.h"
#include "afxdialogex.h"


// MyDlg0 �Ի���

IMPLEMENT_DYNAMIC(MyDlg0, CDialogEx)

MyDlg0::MyDlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
{

}

MyDlg0::~MyDlg0()
{
}

void MyDlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Control(pDX, IDC_EDIT1, abc);
}


BEGIN_MESSAGE_MAP(MyDlg0, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &MyDlg0::OnEnChangeEdit1)
END_MESSAGE_MAP()


// MyDlg0 ��Ϣ�������


void MyDlg0::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


BOOL MyDlg0::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	abc.SetWindowTextW(a);
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
