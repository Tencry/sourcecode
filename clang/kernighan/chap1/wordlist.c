#include <stdio.h>

#define IN	1
#define OUT	0

main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		/*
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			putchar('\n');
		}
		if (state == IN)
			putchar(c);
		*/

		if (c != ' ' && c != '\t' && c != '\n') {
			state = IN;
			putchar(c);
		}
		else if (state == IN) {
			state = OUT;
			putchar('\n');
		}
	}
}
