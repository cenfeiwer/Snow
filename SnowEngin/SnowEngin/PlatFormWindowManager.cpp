#include "PlatFormWindowManager.h"


bool PlatFormWindowManager::CreateW32Window(ISWdevice* device, DeviceMode* mode, std::string WindowName /*= "Snow"*/)
{
	if (device == NULL || mode == NULL)
	{
		TRACE("��������ʱ�豸Ϊ��");
		return false;
	}

	return true;
}