// DeleteStudent.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "DeleteStudent.h"
#include "afxdialogex.h"


// CDeleteStudent dialog

IMPLEMENT_DYNAMIC(CDeleteStudent, CDialogEx)

CDeleteStudent::CDeleteStudent(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

CDeleteStudent::~CDeleteStudent()
{
}

void CDeleteStudent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getID);
}


BEGIN_MESSAGE_MAP(CDeleteStudent, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDeleteStudent::OnBnClickedOk)
END_MESSAGE_MAP()


// CDeleteStudent message handlers


void CDeleteStudent::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
	CString id;
	getID.GetWindowTextW(id);
	long int theID = _ttoi(id);

	CPublic::mc.deleteStudent(theID);
}
