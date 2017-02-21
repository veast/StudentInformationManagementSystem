#pragma once
#include "afxwin.h"


// CQueryStudent dialog

class CQueryStudent : public CDialogEx
{
	DECLARE_DYNAMIC(CQueryStudent)

public:
	CQueryStudent(CWnd* pParent = NULL);   // standard constructor
	virtual ~CQueryStudent();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG12 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedOk();
	CEdit getID;
	CEdit output;
//	afx_msg void OnBnClickedCancel2();
	afx_msg void OnBnClickedButton2();
};
