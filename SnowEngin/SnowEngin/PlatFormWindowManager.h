#ifndef _PLATFORMWINDOWMANAGER_H
#define _PLATFORMWINDOWMANAGER_H

#include "Singleton.h"
#include <iostream>
#include <list>
#include "ISWdevice.h"
#include "Console.h"
#include "PlatFormW32Window.h"
#pragma once

class PlatFormWindowManager : public tSingleton<PlatFormWindowManager>
{
	typedef std::list<PlatFormW32Window*> WindowList;
	typedef std::list<PlatFormW32Window*>::iterator WindowListIter;

public:
	bool CreateW32Window(/*ISWdevice* device,*/ DeviceMode* mode, std::string WindowName = "Snow");
	
public:
	WindowList m_wndList;
};

#endif