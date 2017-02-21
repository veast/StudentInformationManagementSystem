// StudentSave.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "StudentSave.h"
#include "afxdialogex.h"


// CStudentSave dialog

IMPLEMENT_DYNAMIC(CStudentSave, CDialogEx)

CStudentSave::CStudentSave(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

CStudentSave::~CStudentSave()
{
}

void CStudentSave::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getFilename);
}


BEGIN_MESSAGE_MAP(CStudentSave, CDialogEx)
	ON_BN_CLICKED(IDOK, &CStudentSave::OnBnClickedOk)
END_MESSAGE_MAP()


// CStudentSave message handlers


void CStudentSave::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
	CString filename;
	getFilename.GetWindowTextW(filename);
	USES_CONVERSION;
	string theName(W2A(filename));
	CPublic::mc.saveStudentInfo(theName);
}
