#include "MainLoop.h"


MainLoop::MainLoop()
{
}


MainLoop::~MainLoop()
{
}

bool MainLoop::Loop()
{
	MSG msg;
	ZeroMemory(&msg, sizeof(msg));

	while (TRUE)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
				break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else
		{
			//”Œœ∑—≠ª∑

		}
	}

	return false;
}

bool MainLoop::Init()
{
	return true;
}

bool MainLoop::exit()
{
	return true;
}