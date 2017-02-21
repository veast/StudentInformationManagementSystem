// StudentManagement.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "StudentManagement.h"
#include "afxdialogex.h"
#include "Public.h"
#include "AddStudent.h"
#include "DeleteStudent.h"
#include "StudentSave.h"
// CStudentManagement dialog

IMPLEMENT_DYNAMIC(CStudentManagement, CDialogEx)

CStudentManagement::CStudentManagement(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CStudentManagement::~CStudentManagement()
{
}

void CStudentManagement::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CStudentManagement, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CStudentManagement::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CStudentManagement::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON6, &CStudentManagement::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CStudentManagement::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CStudentManagement::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CStudentManagement::OnBnClickedButton9)
END_MESSAGE_MAP()


// CStudentManagement message handlers


void CStudentManagement::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CString filter;
	filter = "文本文档(*.txt)|*.txt|PDF文档(*.pdf)|*.pdf||";
	CFileDialog dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, filter);
	if (dlg.DoModal() == IDOK) {
		CString str;
		str = dlg.GetPathName();	//得到文件绝对路径
		USES_CONVERSION;
		string filename(W2A(str));
		CPublic::mc.readStudentInfo(filename);
	}
}

void CStudentManagement::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
	CAddStudent dlg;
	dlg.DoModal();

}


void CStudentManagement::OnBnClickedButton6()
{
	// TODO: Add your control notification handler code here
	CDeleteStudent dlg;
	dlg.DoModal();
}


void CStudentManagement::OnBnClickedButton7()
{
	// TODO: Add your control notification handler code here
	CPublic::mc.sortStudentByNo();
}


void CStudentManagement::OnBnClickedButton8()
{
	// TODO: Add your control notification handler code here
	CPublic::mc.sortStudentByName();
}


void CStudentManagement::OnBnClickedButton9()
{
	// TODO: Add your control notification handler code here
	CStudentSave dlg;
	dlg.DoModal();
}
