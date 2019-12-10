#include <stdio.h>

#define   LOWER  0	/* нижний предел диапазона */
#define   UPPER  300	/* верхний предел */
#define   STEP   20	/* размер шага */

float celsius(int fahrenheit);

/* вывод таблицы температур по Фаренгейту и Цельсию */
main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, celsius(fahr));
}

float celsius(int fahrenheit)
{
	return (5.0 / 9.0) * (fahrenheit - 32);
}
