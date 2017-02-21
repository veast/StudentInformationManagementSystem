#pragma once


// CStudentManagement dialog

class CStudentManagement : public CDialogEx
{
	DECLARE_DYNAMIC(CStudentManagement)
	
public:
	CStudentManagement(CWnd* pParent = NULL);   // standard constructor
	virtual ~CStudentManagement();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
};
