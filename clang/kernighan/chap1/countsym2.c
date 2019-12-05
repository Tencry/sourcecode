#include <stdio.h>

/* подсчет символов во входном потоке; 2-я версия */
main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
