// AddCourse.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "AddCourse.h"
#include "afxdialogex.h"


// CAddCourse dialog

IMPLEMENT_DYNAMIC(CAddCourse, CDialogEx)

CAddCourse::CAddCourse(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
{

}

CAddCourse::~CAddCourse()
{
}

void CAddCourse::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getName);
	DDX_Control(pDX, IDC_EDIT2, getCredit);
	DDX_Control(pDX, IDC_EDIT1, getName);
}


BEGIN_MESSAGE_MAP(CAddCourse, CDialogEx)
	ON_BN_CLICKED(IDOK, &CAddCourse::OnBnClickedOk)
END_MESSAGE_MAP()


// CAddCourse message handlers


void CAddCourse::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
	CString credit;
	getCredit.GetWindowTextW(credit);
	int theCredit = _ttoi(credit);

	CString name;
	getName.GetWindowTextW(name);
	USES_CONVERSION;
	string theName(W2A(name));

	CPublic::mc.addCourse(theCredit, theName);
}
