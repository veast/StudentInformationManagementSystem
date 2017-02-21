
// Student.h : main header file for the PROJECT_NAME application
//

#pragma once


#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include "Public.h"

// CStudentApp:
// See Student.cpp for the implementation of this class
//

class CStudentApp : public CWinApp
{
public:
	CStudentApp();

// Overridse
public:
	virtual BOOL InitInstance();


// Implementation

	DECLARE_MESSAGE_MAP()


};

extern CStudentApp theApp;