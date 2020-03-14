
// date0310T02.h: date0310T02 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// Cdate0310T02App:
// 有关此类的实现，请参阅 date0310T02.cpp
//

class Cdate0310T02App : public CWinApp
{
public:
	Cdate0310T02App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdate0310T02App theApp;
