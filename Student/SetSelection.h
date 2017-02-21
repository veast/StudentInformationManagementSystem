#pragma once
#include "afxwin.h"


// CSetSelection dialog

class CSetSelection : public CDialogEx
{
	DECLARE_DYNAMIC(CSetSelection)

public:
	CSetSelection(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSetSelection();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG10 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit getID;
	CEdit getName;
	afx_msg void OnBnClickedOk();
};
