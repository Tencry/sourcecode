#include <stdio.h>

#define IN	1
#define OUT	0
#define COLUMNS	24

main()
{
	int i, c, state, max, j;
	int column[COLUMNS];

	for (i = 0; i < COLUMNS; ++i) {
		column[i] = 0;
	}

	state = OUT;
	i = 0;
	while ((c = getchar()) != EOF && i < COLUMNS)
	{
		if (c != ' ' && c != '\t' && c != '\n') {
			++column[i];
			state = IN;
		}
		else if (state == IN) {
			state = OUT;
			++i;
		}
	}

	max = 0;
	for (i = 0; i < COLUMNS; ++i) {
		printf("%3d", column[i]);
		if (max < column[i])
			max = column[i];
	}
	putchar('\n');

	for(j = 0; j < max; ++j) {
		for (i = 0; i < COLUMNS; ++i) {
			if (column[i] > j)
				printf("%3c", '*');
			else
				printf("   ");
		}
		putchar('\n');
	}
}
