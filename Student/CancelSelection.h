#pragma once
#include "afxwin.h"


// CCancelSelection dialog

class CCancelSelection : public CDialogEx
{
	DECLARE_DYNAMIC(CCancelSelection)

public:
	CCancelSelection(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCancelSelection();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG11 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	CEdit theID;
//	CEdit theName;
	afx_msg void OnBnClickedOk();
	CEdit getID;
	CEdit getName;
};
