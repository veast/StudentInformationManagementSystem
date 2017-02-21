#pragma once
#include "afxwin.h"


// CDeleteCourse dialog

class CDeleteCourse : public CDialogEx
{
	DECLARE_DYNAMIC(CDeleteCourse)

public:
	CDeleteCourse(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDeleteCourse();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit getName;
	afx_msg void OnBnClickedOk();
};
