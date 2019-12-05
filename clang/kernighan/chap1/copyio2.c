#include <stdio.h>

/* копирование входного потока в выходной; 2-я версия */
main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}
