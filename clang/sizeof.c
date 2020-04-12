#include <stdio.h>

int main()
{
	// output
	printf("Hello World!\n");
	puts("Hello, world!");

	// type size
	char            c = -1;
	unsigned char  uc = -1;
	short           s = -1;
	unsigned short us = -1;
	int             i = -1;
	unsigned        u = -1;
	long            l = -1;
	unsigned long  ul = -1;
	float           f = -1;
	double          d = -1;
	puts("");
	puts(  "  Type  |        Value         | SizeOf");
	puts(  "----------------------------------------");
	printf(" char   | %20d | %3lu\n", c, sizeof(c));
	printf(" uchar  | %20d | %3lu\n", uc, sizeof(uc));
	printf(" short  | %20d | %3lu\n", s, sizeof(s));
	printf(" ushort | %20d | %3lu\n", us, sizeof(unsigned short));
	printf(" int    | %20d | %3lu\n", i, sizeof(i));
	printf(" uint   | %20d | %3lu\n", u, sizeof(unsigned));     // <-- pay attantion
	printf(" uint   | %20u | %3lu\n", u, sizeof(unsigned int)); // <--
	printf(" long   | %20ld | %3lu\n", l, sizeof(l));
	printf(" ulong  | %lu | %3lu\n", ul, sizeof(unsigned long));
	printf(" float  | %20.2f | %3lu\n", f, sizeof(f));
	printf(" double | %20f | %3lu\n", d, sizeof(d));
	puts(  "----------------------------------------");
	puts("");

	// char
	c = 'a';
	printf(" c = %d\n", c);
	printf(" c = %c\n", c);

	puts("END.");
}
