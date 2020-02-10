#include <stdio.h>

main()
{
	char filename[128];
	FILE *fp;
	int c;

	printf("Input filename: ");
	scanf("%s", filename);
	fp = fopen(filename, "w");

	while ((c = getchar()) != EOF) {
		fputc(c, fp);
	}

	fclose(fp);
}
