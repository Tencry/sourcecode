#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s = "Hello World!";
	char *p;
	p = malloc(strlen(s)+1);
	strcpy(p, s);
	puts(p);
	free(p);
	return 0;
}
