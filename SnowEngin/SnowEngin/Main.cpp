#include "cInterface.h"
#include "Console.h"

int _stdcall WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	bool ret = SnowEngin_init();

	if (!ret)
		MessageBox(NULL, "´°¿Ú³õÊ¼»¯Ê§°Ü", "ERROR", MB_OK);

	SnowEngin_tick();

	SnowEngin_exit();

	return 0;

}