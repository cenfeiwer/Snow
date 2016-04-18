#ifndef _PLATFORMWINDOWMANAGER_H
#define _PLATFORMWINDOWMANAGER_H

#include "Singleton.h"
#include <iostream>
#include "ISWdevice.h"
#include "Console.h"
#pragma once

class PlatFormWindowManager : public tSingleton<PlatFormWindowManager>
{
public:
	bool CreateW32Window(ISWdevice* device, DeviceMode* mode,std::string WindowName = "Snow");
};

#endif