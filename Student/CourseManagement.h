#pragma once


// CCourseManagement dialog

class CCourseManagement : public CDialogEx
{
	DECLARE_DYNAMIC(CCourseManagement)

public:
	CCourseManagement(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCourseManagement();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton5();
};
