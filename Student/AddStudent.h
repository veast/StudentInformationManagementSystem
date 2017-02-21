#pragma once
#include "afxwin.h"


// CAddStudent dialog

class CAddStudent : public CDialogEx
{
	DECLARE_DYNAMIC(CAddStudent)

public:
	CAddStudent(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAddStudent();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit getID;
	CEdit getName;
	afx_msg void OnBnClickedOk();
};
