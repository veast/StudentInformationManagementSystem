// QueryStudent.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "QueryStudent.h"
#include "afxdialogex.h"


// CQueryStudent dialog

IMPLEMENT_DYNAMIC(CQueryStudent, CDialogEx)

CQueryStudent::CQueryStudent(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG12, pParent)
{

}

CQueryStudent::~CQueryStudent()
{
}

void CQueryStudent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getID);
	DDX_Control(pDX, IDC_EDIT2, output);
}


BEGIN_MESSAGE_MAP(CQueryStudent, CDialogEx)
//	ON_BN_CLICKED(IDOK, &CQueryStudent::OnBnClickedOk)
//ON_BN_CLICKED(IDCANCEL2, &CQueryStudent::OnBnClickedCancel2)
ON_BN_CLICKED(IDC_BUTTON2, &CQueryStudent::OnBnClickedButton2)
END_MESSAGE_MAP()


// CQueryStudent message handlers


//void CQueryStudent::OnBnClickedOk()
//{
//	// TODO: Add your control notification handler code here
//	CDialogEx::OnOK();
//	CString id;
//	getID.GetWindowTextW(id);
//	long int theID = _ttoi(id);
//
//	string result = CPublic::mc.queryStudent(theID);
//	CString Cresult(result.c_str());
//	SetDlgItemText(IDC_EDIT2, Cresult);
//}


//void CQueryStudent::OnBnClickedCancel2()
//{
//	// TODO: Add your control notification handler code here
//	CString id;
//	getID.GetWindowTextW(id);
//	long int theID = _ttoi(id);
//	
//	string result = CPublic::mc.queryStudent(theID);
//	CString Cresult(result.c_str());
//	SetDlgItemText(IDC_EDIT2, Cresult);
//}


void CQueryStudent::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	CString id;
	getID.GetWindowTextW(id);
	long int theID = _ttoi(id);
	
	string result = CPublic::mc.queryStudent(theID);
	CString Cresult(result.c_str());
	SetDlgItemText(IDC_EDIT2, Cresult);
}
