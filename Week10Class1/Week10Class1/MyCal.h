#pragma once


// MyCal �Ի���

class MyCal : public CDialogEx
{
	DECLARE_DYNAMIC(MyCal)

public:
	MyCal(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyCal();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	double a;
	double b;
	double c;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton8();
};
