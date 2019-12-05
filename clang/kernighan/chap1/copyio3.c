#include <stdio.h>

/* копирование входного потока в выходной; 2-я версия */
main()
{
	int c;

	while (c = getchar() != EOF)
		printf("%d", c);
	printf("%d", c); /* EOF in Unix Ctrl+D, in Windows Ctrl+Z */
}
