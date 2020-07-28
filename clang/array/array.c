#include <stdio.h>

#define ARRAY_SIZE 5

int main(int argc, char *argv[])
{
	int ret = 0;

	int list[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; ++i) {
		list[i] = ARRAY_SIZE - i;
	}

	for (int i = 0; i < ARRAY_SIZE; ++i) {
		printf("%d\n", list[i]);
	}


	return ret;
}
