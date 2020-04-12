#include <stdio.h>

int arg(int, char * const *);
void change(int *);
void cantchange(const int *);

int 
main(int argc, char *argv[])
{
	puts("Hello World!");
	arg(argc, argv);
	int i = 2;
	int *p = &i;
	cantchange(&i);
	change(p);
	printf("%d\n", i);
	return 0;
}

int 
//arg(int argc, char * const argv[]) // argv[] same thing like *argv
arg(int argc, char * const *argv)
{
	//if (arrc > 0) argv[0] = "read-only"; // try uncomment this
	for (int i = 0; i < argc; puts(argv[i++]));
	return 0;
}

void 
change(int *n)
{
	*n += 3;
}

void 
cantchange(const int *n)
{
	//*n += 3; // try uncomment this
}
