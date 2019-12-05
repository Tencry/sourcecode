#include <stdio.h>

/* подсчет символов во входном потоке; 1-я версия */
main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
