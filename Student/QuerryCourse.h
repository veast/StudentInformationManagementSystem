#pragma once
#include "afxwin.h"


// CQuerryCourse dialog

class CQuerryCourse : public CDialogEx
{
	DECLARE_DYNAMIC(CQuerryCourse)

public:
	CQuerryCourse(CWnd* pParent = NULL);   // standard constructor
	virtual ~CQuerryCourse();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG13 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	CEdit getName;
};
