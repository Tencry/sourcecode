#include <stdio.h>

/* вывод таблицы температур по Цельсию и Фаренгейту
     для fahr = 0, 20, ..., 300
     версия с вещественной арифметикой */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -20;	/* нижняя граница температур в таблице */
	upper = 280;	/* верхняя граница */
	step = 20;	/* величина шага */

	printf("celsius fahr\n");

	celsius = lower;
	while (celsius <= upper) {
		/*
		 * celsius = (5.0/9.0) * (fahr - 32.0);
		 * fahr = (celsius + ((5./9.)*32.)) / (5./9.);
		 * fahr = (celsius + (32.*5./9.)) * 9. / 5.;
		 * fahr = celsius / (5./9.) + 32.;
		 */
		fahr = celsius * 9. / 5. + 32.;
		printf("%6.0f  %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
