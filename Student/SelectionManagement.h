#pragma once


// CSelectionManagement dialog

class CSelectionManagement : public CDialogEx
{
	DECLARE_DYNAMIC(CSelectionManagement)

public:
	CSelectionManagement(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSelectionManagement();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG9 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
};
