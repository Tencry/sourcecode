#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%ld\n", sizeof(0));
	printf("%ld\n", sizeof('0'));
	printf("%ld\n", sizeof(0xff));
	printf("%d\n", 0xff);
	printf("%ld\n", sizeof(0xffff));
	printf("%d\n",  0xffff);
	printf("%d\n",  0xffffffff);
	printf("%ld\n", sizeof(0xffffffffffffffff));
	printf("%ld\n", sizeof(10000000000));
	
	printf("%x\n", -1);
	printf("%lx\n", -1L);


	printf("%ld\n", sizeof(10000000000000000L));
	printf("%d %d %d\n", -100, 0, 2000000000);
	if (010 == 10) {
		puts("010 == 10");
	}
	else {
		puts("010 != 10");
	}
	return EXIT_SUCCESS;
}
