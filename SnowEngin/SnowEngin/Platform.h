#ifndef _PLATFORM_H
#define _PLATFORM_H
#include <windows.h>

#pragma once

class Platform
{
public:
	Platform();
	~Platform();

	static bool Init();

};

#endif