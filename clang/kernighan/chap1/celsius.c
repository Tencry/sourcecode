#include <stdio.h>

/* вывод таблицы температур по Фаренгейту и Цельсию
     для fahr = 0, 20, ..., 300
     версия с вещественной арифметикой */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* нижняя граница температур в таблице */
	upper = 300;	/* верхняя граница */
	step = 20;	/* величина шага */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
