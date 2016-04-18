#include "PlatFormW32Window.h"
#include <iostream>


PlatFormW32Window::PlatFormW32Window()
{
}


PlatFormW32Window::~PlatFormW32Window()
{
}

LRESULT CALLBACK PlatFormW32Window::WindowProc(_In_ HWND hwnd, _In_ UINT uMsg, _In_ WPARAM wParam, _In_ LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_DESTROY:
		{
			 PostQuitMessage(0);
			 return 0;
		}
	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

bool PlatFormW32Window::Create(DeviceMode* mode, std::string WindowName)
{
	if (mode == NULL)
	{
		return false;
	}
	// 类名  
	char* cls_Name = "My Class";
	// 设计窗口类  
	WNDCLASS wc;
	ZeroMemory(&wc, sizeof(wc));
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpfnWndProc = PlatFormW32Window::WindowProc;
	wc.lpszClassName = cls_Name;
	
	wc.hInstance = GetModuleHandle(0);
	// 注册窗口类  
	RegisterClass(&wc);

	// 创建窗口  
	HWND hwnd = CreateWindow(
		cls_Name,           //类名，要和刚才注册的一致  
		WindowName.c_str(),  //窗口标题文字  
		WS_OVERLAPPEDWINDOW, //窗口外观样式  
		0,             //窗口相对于父级的X坐标  
		0,             //窗口相对于父级的Y坐标  
		800,                //窗口的宽度  
		600,                //窗口的高度  
		NULL,               //没有父窗口，为NULL  
		NULL,               //没有菜单，为NULL  
		GetModuleHandle(0),          //当前应用程序的实例句柄  
		NULL);              //没有附加数据，为NULL  
	if (hwnd == NULL) //检查窗口是否创建成功  
		return false;

	m_CurrentHwnd = hwnd;

	UpdateWindow(m_CurrentHwnd);

	Show();

	return true;
}

void PlatFormW32Window::Show()
{
	ShowWindow(m_CurrentHwnd,SW_SHOW);
}

void PlatFormW32Window::hide()
{
	ShowWindow(m_CurrentHwnd, SW_HIDE);
}