#include "PlatFormWindowManager.h"


bool PlatFormWindowManager::CreateW32Window(ISWdevice* device, DeviceMode* mode, std::string WindowName /*= "Snow"*/)
{
	if (device == NULL || mode == NULL)
	{
		TRACE("创建窗口时设备为空");
		return false;
	}

	return true;
}