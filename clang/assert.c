#include <stdio.h>
/*#define NDEBUG*/
#include <assert.h>

main()
{
	printf("Hello World!\n");
	assert(1 == 1);
	printf("It's must be true\n");
	assert(1 != 1);
	printf("This is false\n");
}
