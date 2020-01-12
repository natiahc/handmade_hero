#include <windows.h>

int CALLBACK
WinMain(HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPSTR lpCmdLine,
		int nCmdShow)
{
	//GetModuleHandle(0);
	MessageBox(0, "Test Text", "Test Title", MB_OK|MB_ICONINFORMATION);
	return(0);
}