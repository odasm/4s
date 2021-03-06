// ClientLauncher.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


// CClientLauncherApp:
// See ClientLauncher.cpp for the implementation of this class
//

class CClientLauncherApp : public CWinApp
{
public:
	CClientLauncherApp();

// Overrides
	public:
	virtual void LoadStdProfileSettings();
	virtual void SaveStdProfileSettings();

	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CClientLauncherApp theApp;