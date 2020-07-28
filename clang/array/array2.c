#include <stdio.h>

#define ARRAY_SIZE 5

void zero(int *a, int size)
{

	for (int i = 0; i < size; ++i) {
		a[i] = size - i;
	}
}

void show(int *a, int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%d\n", *(a+i));
	}
}

int main(int argc, char *argv[])
{
	int ret = 0;

	int list[ARRAY_SIZE];

	zero(list, ARRAY_SIZE);

	show(list, ARRAY_SIZE);

	return ret;
}
