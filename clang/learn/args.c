#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		puts(argv[i]);
		++i;
	}

	for (int i = 0; i < argc; ++i)
	{
		puts(argv[i]);
	}

	i = 0;
	do {
		puts(argv[i]);
		++i;
	} while (i < argc);

	return EXIT_SUCCESS;
}
