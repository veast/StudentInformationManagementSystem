#pragma once
#include "afxwin.h"


// CDeleteStudent dialog

class CDeleteStudent : public CDialogEx
{
	DECLARE_DYNAMIC(CDeleteStudent)

public:
	CDeleteStudent(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDeleteStudent();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit getID;
	afx_msg void OnBnClickedOk();
};
