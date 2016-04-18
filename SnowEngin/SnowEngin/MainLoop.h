#ifndef _MAINLOOP_H_
#define _MAINLOOP_H_
#include "Console.h"

#pragma once
class MainLoop
{
public:
	MainLoop();
	~MainLoop();

	static bool Init();

	static bool Loop();

	static bool exit();
};

#endif