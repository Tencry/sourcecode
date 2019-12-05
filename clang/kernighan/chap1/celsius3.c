#include <stdio.h>

#define   LOWER  0	/* нижний предел диапазона */
#define   UPPER  300	/* верхний предел */
#define   STEP   20	/* размер шага */

/* вывод таблицы температур по Фаренгейту и Цельсию */
main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
