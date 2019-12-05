#include <stdio.h>

/* подсчет пробелов, знаков табуляции и символов конца строки  во входном потоке */
main()
{
	int c;
	long ns, nt, nl, total;

	ns = nt = nl = total = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			++total;
		if (c == ' ')
			++ns;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("spaces: %ld, tabs: %ld, newlines: %ld, total: %ld\n",
			ns, nt, nl, total);
}
