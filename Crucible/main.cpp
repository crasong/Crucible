#include "System.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	System* nSystem;
	bool result;

	nSystem = new System;
	if (!nSystem)
	{
		return 0;
	}

	result = nSystem->Initialize();
	if (result)
	{
		nSystem->Run();
	}

	nSystem->Shutdown();
	delete nSystem;
	nSystem = 0;

	return 0;
}