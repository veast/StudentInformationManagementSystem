// CourseSave.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "CourseSave.h"
#include "afxdialogex.h"


// CCourseSave dialog

IMPLEMENT_DYNAMIC(CCourseSave, CDialogEx)

CCourseSave::CCourseSave(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG8, pParent)
{

}

CCourseSave::~CCourseSave()
{
}

void CCourseSave::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getName);
}


BEGIN_MESSAGE_MAP(CCourseSave, CDialogEx)
	ON_BN_CLICKED(IDOK, &CCourseSave::OnBnClickedOk)
END_MESSAGE_MAP()


// CCourseSave message handlers


void CCourseSave::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
	CString filename;
	getName.GetWindowTextW(filename);
	USES_CONVERSION;
	string theName(W2A(filename));
	CPublic::mc.saveCourseInfo(theName);
}
