#pragma once
#include "afxwin.h"


// CStudentSave dialog

class CStudentSave : public CDialogEx
{
	DECLARE_DYNAMIC(CStudentSave)

public:
	CStudentSave(CWnd* pParent = NULL);   // standard constructor
	virtual ~CStudentSave();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit getFilename;
	afx_msg void OnBnClickedOk();
};
