// QuerryCourse.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "QuerryCourse.h"
#include "afxdialogex.h"


// CQuerryCourse dialog

IMPLEMENT_DYNAMIC(CQuerryCourse, CDialogEx)

CQuerryCourse::CQuerryCourse(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG13, pParent)
{

}

CQuerryCourse::~CQuerryCourse()
{
}

void CQuerryCourse::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getName);
}


BEGIN_MESSAGE_MAP(CQuerryCourse, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CQuerryCourse::OnBnClickedButton2)
END_MESSAGE_MAP()


// CQuerryCourse message handlers


void CQuerryCourse::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	CString name;
	getName.GetWindowTextW(name);
	USES_CONVERSION;
	string theName(W2A(name));

	string result = CPublic::mc.queryCourse(theName);
	CString Cresult(result.c_str());
	SetDlgItemText(IDC_EDIT2, Cresult);
}
