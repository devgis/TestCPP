
// MyMFCAPP.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMyMFCAPPApp: 
// �йش����ʵ�֣������ MyMFCAPP.cpp
//

class CMyMFCAPPApp : public CWinApp
{
public:
	CMyMFCAPPApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMyMFCAPPApp theApp;