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
	// ����  
	char* cls_Name = "My Class";
	// ��ƴ�����  
	WNDCLASS wc;
	ZeroMemory(&wc, sizeof(wc));
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpfnWndProc = PlatFormW32Window::WindowProc;
	wc.lpszClassName = cls_Name;
	
	wc.hInstance = GetModuleHandle(0);
	// ע�ᴰ����  
	RegisterClass(&wc);

	// ��������  
	HWND hwnd = CreateWindow(
		cls_Name,           //������Ҫ�͸ղ�ע���һ��  
		WindowName.c_str(),  //���ڱ�������  
		WS_OVERLAPPEDWINDOW, //���������ʽ  
		0,             //��������ڸ�����X����  
		0,             //��������ڸ�����Y����  
		800,                //���ڵĿ��  
		600,                //���ڵĸ߶�  
		NULL,               //û�и����ڣ�ΪNULL  
		NULL,               //û�в˵���ΪNULL  
		GetModuleHandle(0),          //��ǰӦ�ó����ʵ�����  
		NULL);              //û�и������ݣ�ΪNULL  
	if (hwnd == NULL) //��鴰���Ƿ񴴽��ɹ�  
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