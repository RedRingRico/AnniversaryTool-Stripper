#include <windows.h>

INT WINAPI WinMain( HINSTANCE p_ThisInstance, HINSTANCE p_PrevInstance,
	LPSTR p_CmdLine, INT p_CmdShow )
{
	::MessageBox( NULL, L"Stripper Tool", L"Message", MB_OK );

	return 0;
}
