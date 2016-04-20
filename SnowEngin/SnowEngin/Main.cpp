#include "cInterface.h"
#include "Console.h"
#include "tSignal.h"

class test2
{

public:
	static Signal<void()> sg;
};

class test
{
public:

	void testSignal() { ::MessageBox(NULL, "�ź��յ�", NULL, MB_OK); }
	void NotifyTest() { test2::sg.notify(this, &test::testSignal); }
};

Signal<void()> test2::sg;

int _stdcall WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	test a;
	test2 b;

	a.NotifyTest();
	b.sg.trigger();

	bool ret = SnowEngin_init();

	if (!ret)
		MessageBox(NULL, "���ڳ�ʼ��ʧ��", "ERROR", MB_OK);

	SnowEngin_tick();

	SnowEngin_exit();

	return 0;

}