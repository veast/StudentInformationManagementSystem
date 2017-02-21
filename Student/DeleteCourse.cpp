// DeleteCourse.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "DeleteCourse.h"
#include "afxdialogex.h"


// CDeleteCourse dialog

IMPLEMENT_DYNAMIC(CDeleteCourse, CDialogEx)

CDeleteCourse::CDeleteCourse(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG7, pParent)
{

}

CDeleteCourse::~CDeleteCourse()
{
}

void CDeleteCourse::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getName);
}


BEGIN_MESSAGE_MAP(CDeleteCourse, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDeleteCourse::OnBnClickedOk)
END_MESSAGE_MAP()


// CDeleteCourse message handlers


void CDeleteCourse::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
	CString name;
	getName.GetWindowTextW(name);
	USES_CONVERSION;
	string theName(W2A(name));
	CPublic::mc.deleteCourse(theName);
}
