#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; ++i)
	{
		puts(argv[i]);
	}

	return EXIT_SUCCESS;
}
