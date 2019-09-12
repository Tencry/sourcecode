#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 0)
    {
        for (int i=0; i < argc; printf("%s\n", argv[i++]));
    }

    return 0;
}
