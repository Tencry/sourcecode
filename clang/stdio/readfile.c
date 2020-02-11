#include <stdio.h>

main()
{
	char filename[128];
	FILE *fp;
	int c;

	printf("Input filename: ");
	scanf("%s", filename);
	fp = fopen(filename, "r");

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);
}
