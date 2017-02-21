// SetSelection.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "SetSelection.h"
#include "afxdialogex.h"


// CSetSelection dialog

IMPLEMENT_DYNAMIC(CSetSelection, CDialogEx)

CSetSelection::CSetSelection(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG10, pParent)
{

}

CSetSelection::~CSetSelection()
{
}

void CSetSelection::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, getID);
	DDX_Control(pDX, IDC_EDIT2, getName);
}


BEGIN_MESSAGE_MAP(CSetSelection, CDialogEx)
	ON_BN_CLICKED(IDOK, &CSetSelection::OnBnClickedOk)
END_MESSAGE_MAP()


// CSetSelection message handlers


void CSetSelection::OnBnClickedOk()
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

	CPublic::mc.setSelection(theID, theName);
}
