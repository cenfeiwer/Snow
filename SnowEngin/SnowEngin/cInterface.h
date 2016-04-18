#include "ISWdevice.h"
#include "PlatFormWindowManager.h"
#include "MainLoop.h"
extern "C"
{
	bool SnowEngin_init()
	{
		DeviceMode mode;
		mode.FullWindow = false;
		PlatFormWindowManager::instance()->CreateW32Window(&mode);

		MainLoop::Init();

		return true;
	}



	void SnowEngin_tick()
	{
		MainLoop::Loop();
	}



	void SnowEngin_exit()
	{
		MainLoop::exit();
	}
}