#include <stdio.h>

/* 126 ('~') - 33 ('!') = 93 chars */
#define CHARS	93

main()
{
	int i, j, c;
	int nchar[CHARS];

	for (i = 0; i < CHARS; ++i) {
		nchar[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >= '!' && c <= '~') {
			++nchar[c-'!'];
		}
	}

	for (i = 0; i < CHARS; ++i) {
		printf(" %c %3d ", i + '!', nchar[i]);
		for (j = 0; j < nchar[i]; ++j)
			putchar('*');
		putchar('\n');
	}
}
