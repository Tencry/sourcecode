#include <windows.h>
#include "common.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR cmdline, int cmdshow)
{
	show_msg("Message text", "Message caption");
	return MessageBox(NULL, "Hello World!", "Game-win32", 0);
}
