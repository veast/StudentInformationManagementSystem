// SelectionManagement.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "SelectionManagement.h"
#include "afxdialogex.h"
#include "SetSelection.h"
#include "CancelSelection.h"
#include "QueryStudent.h"
#include "QuerryCourse.h"

// CSelectionManagement dialog

IMPLEMENT_DYNAMIC(CSelectionManagement, CDialogEx)

CSelectionManagement::CSelectionManagement(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG9, pParent)
{

}

CSelectionManagement::~CSelectionManagement()
{
}

void CSelectionManagement::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSelectionManagement, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSelectionManagement::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CSelectionManagement::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON6, &CSelectionManagement::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CSelectionManagement::OnBnClickedButton7)
END_MESSAGE_MAP()


// CSelectionManagement message handlers


void CSelectionManagement::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CSetSelection dlg;
	dlg.DoModal();
}


void CSelectionManagement::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
	CCancelSelection dlg;
	dlg.DoModal();
}


void CSelectionManagement::OnBnClickedButton6()
{
	// TODO: Add your control notification handler code here
	CQueryStudent dlg;
	dlg.DoModal();
}


void CSelectionManagement::OnBnClickedButton7()
{
	// TODO: Add your control notification handler code here
	CQuerryCourse dlg;
	dlg.DoModal();
}
