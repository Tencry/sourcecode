#include <stdio.h>

main()
{
	int c, ns;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (ns == 0)
				putchar(c);
			++ns;
		}
		if (c != ' ') {
			putchar(c);
			ns = 0;
		}
	}
}
