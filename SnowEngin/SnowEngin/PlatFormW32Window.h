#ifndef _PLATFORMWINdOW_H
#define _PLATFORMWINdOW_H
#include <windows.h>
#include "ISWdevice.h"
#include <iostream>

#pragma once

class PlatFormW32Window
{
public:
	PlatFormW32Window();
	~PlatFormW32Window();

	bool Create(DeviceMode* mode, std::string WindowName);

	static LRESULT CALLBACK WindowProc(_In_  HWND hwnd, _In_  UINT uMsg, _In_  WPARAM wParam, _In_  LPARAM lParam);

	void setPosition();

	void Show();

	void hide();

private:
	HWND m_CurrentHwnd;
};

#endif
