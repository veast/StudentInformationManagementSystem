#pragma once
#include "afxwin.h"


// CCourseSave dialog

class CCourseSave : public CDialogEx
{
	DECLARE_DYNAMIC(CCourseSave)

public:
	CCourseSave(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCourseSave();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG8 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit getName;
	afx_msg void OnBnClickedOk();
};
