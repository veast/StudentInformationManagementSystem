// AddStudent.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "AddStudent.h"
#include "afxdialogex.h"
#include "Public.h"


// CAddStudent dialog

IMPLEMENT_DYNAMIC(CAddStudent, CDialogEx)

CAddStudent::CAddStudent(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

CAddStudent::~CAddStudent()
{
}

void CAddStudent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getID);
	DDX_Control(pDX, IDC_EDIT2, getName);
}


BEGIN_MESSAGE_MAP(CAddStudent, CDialogEx)
	ON_BN_CLICKED(IDOK, &CAddStudent::OnBnClickedOk)
END_MESSAGE_MAP()


// CAddStudent message handlers


void CAddStudent::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
	CString id;
	getID.GetWindowTextW(id);
	long int theID = _ttoi(id);
	
	CString name;
	getName.GetWindowTextW(name);
	USES_CONVERSION;
	string theName(W2A(name));

	CPublic::mc.addStudent(theID,theName);

	
}
