#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", 
        -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    );

    /*    0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16 */	
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
        000, 001, 002, 003, 004, 005, 006, 007, 010, 011, 012, 013, 014, 015, 016, 017, 020
    );

    /*    0    1    2    3    4    5    6    7    8    9    16    17    18    19    20    21    22 */
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
        0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    );

    /*   */
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
        0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x6, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11
    );

	printf("%d %ld\n", 10, 10L);

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
