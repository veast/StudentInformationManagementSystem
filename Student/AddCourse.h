#pragma once
#include "afxwin.h"


// CAddCourse dialog

class CAddCourse : public CDialogEx
{
	DECLARE_DYNAMIC(CAddCourse)

public:
	CAddCourse(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAddCourse();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	CEdit getName;
	CEdit getCredit;
	CEdit getName;
	afx_msg void OnBnClickedOk();
};
