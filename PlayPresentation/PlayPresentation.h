
// PlayPresentation.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CPlayPresentationApp:
// �� Ŭ������ ������ ���ؼ��� PlayPresentation.cpp�� �����Ͻʽÿ�.
//

class CPlayPresentationApp : public CWinApp
{
public:
	CPlayPresentationApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CPlayPresentationApp theApp;