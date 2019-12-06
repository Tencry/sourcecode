#include <stdio.h>

#define IN_WORD   1
#define OUT_WORD  0

main()
{
	int c, state;
	long nl, nw, ns;

	state = OUT_WORD;
	nl = nw = ns = 0;
	while ((c = getchar()) != EOF) {
		if (state == OUT_WORD && (c != ' ' && c != '\t' && c != '\n')) {
			state = IN_WORD;
			++nw;
		}
		if (state == IN_WORD && (c == ' ' || c == '\t' || c == '\n')) {
			state = OUT_WORD;
		}
		if (c == '\n')
			++nl;
		++ns;
	}
	printf("%ldL, %ldW, %ldC\n", nl, nw, ns);
}
