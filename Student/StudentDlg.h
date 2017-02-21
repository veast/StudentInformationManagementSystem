
// StudentDlg.h : header file
//

#pragma once
#include "StudentManagement.h"
#include "mainControl.h"
#include "AddStudent.h"
#include "DeleteStudent.h"
#include "StudentSave.h"
#include "CourseManagement.h"
#include "SelectionManagement.h"

// CStudentDlg dialog
class CStudentDlg : public CDialogEx
{
// Construction
public:
	CStudentDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STUDENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
};
