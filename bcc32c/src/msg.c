#include <windows.h>
#include "common.h"

int show_msg(char *m, char *c)
{
	return MessageBox(NULL, m, c, 0);
}