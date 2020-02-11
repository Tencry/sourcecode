#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("run the program with the input file: $ ./a.out < basicinput.c\n");
    printf("\'\\0\' = %d\n", '\0');
    printf("EOF  = %d\n", EOF);
    printf("file output:\n");

    int c;
    while ( (c = getchar()) != 
            //'\0'
            EOF
          )
    {
        putchar(c);
    }

    return 0;
}
