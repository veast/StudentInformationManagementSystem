// CourseManagement.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "CourseManagement.h"
#include "afxdialogex.h"
#include "AddCourse.h"
#include "DeleteCourse.h"
#include "CourseSave.h"
// CCourseManagement dialog

IMPLEMENT_DYNAMIC(CCourseManagement, CDialogEx)

CCourseManagement::CCourseManagement(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

CCourseManagement::~CCourseManagement()
{
}

void CCourseManagement::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCourseManagement, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CCourseManagement::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCourseManagement::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON10, &CCourseManagement::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON5, &CCourseManagement::OnBnClickedButton5)
END_MESSAGE_MAP()


// CCourseManagement message handlers


void CCourseManagement::OnBnClickedButton1()
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
		CPublic::mc.readCourseInfo(filename);
	}
}


void CCourseManagement::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	CAddCourse dlg;
	dlg.DoModal();
}


void CCourseManagement::OnBnClickedButton10()
{
	// TODO: Add your control notification handler code here
	CDeleteCourse dlg;
	dlg.DoModal();
}


void CCourseManagement::OnBnClickedButton5()
{
	// TODO: Add your control notification handler code here
	CCourseSave dlg;
	dlg.DoModal();
}
