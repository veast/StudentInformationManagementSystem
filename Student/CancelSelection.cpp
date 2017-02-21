// CancelSelection.cpp : implementation file
//

#include "stdafx.h"
#include "Student.h"
#include "CancelSelection.h"
#include "afxdialogex.h"



// CCancelSelection dialog

IMPLEMENT_DYNAMIC(CCancelSelection, CDialogEx)

CCancelSelection::CCancelSelection(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG11, pParent)
{

}

CCancelSelection::~CCancelSelection()
{
}

void CCancelSelection::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_EDIT1, theID);
	//  DDX_Control(pDX, IDC_EDIT2, theName);
	DDX_Control(pDX, IDC_EDIT1, getID);
	DDX_Control(pDX, IDC_EDIT2, getName);
}


BEGIN_MESSAGE_MAP(CCancelSelection, CDialogEx)
	ON_BN_CLICKED(IDOK, &CCancelSelection::OnBnClickedOk)
END_MESSAGE_MAP()


// CCancelSelection message handlers


void CCancelSelection::OnBnClickedOk()
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

	CPublic::mc.cancelSelection(theID, theName);
}
