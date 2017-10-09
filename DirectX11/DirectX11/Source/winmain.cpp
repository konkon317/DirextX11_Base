#if _DEBUG

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#endif

#include <Windows.h>
#pragma comment(lib, "winmm.lib")




//他のインクルードはこの上に追加すること
#if _DEBUG
#define new ::new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif


int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	return 0;
}