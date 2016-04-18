#include "PlatFormWindowManager.h"


bool PlatFormWindowManager::CreateW32Window(/*ISWdevice* device,*/ DeviceMode* mode, std::string WindowName /*= "Snow"*/)
{
	if (/*device == NULL ||*/ mode == NULL)
	{
		TRACE("��������ʱ�豸Ϊ��");
		return false;
	}

	PlatFormW32Window* window = new PlatFormW32Window();
	window->Create(mode, WindowName);
	window->Show();

	m_wndList.push_back(window);


	return true;
}