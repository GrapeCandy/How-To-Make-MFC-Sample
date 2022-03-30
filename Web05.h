// Web05.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CWeb05App:
// See Web05.cpp for the implementation of this class
//

class CWeb05App : public CWinApp
{
public:
	CWeb05App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CWeb05App theApp;