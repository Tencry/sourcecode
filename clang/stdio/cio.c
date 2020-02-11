#include <stdio.h>

main()
{
	int age;
	char name[128];
	printf("Console input/output\n");

	printf("Input name: ");
	/* input */
	scanf("%s", name);

	printf("Input age: ");
	/* input */
	scanf("%d", &age);

	/* output */
	printf("Name: %s\nAge: %d\n", name, age);
}
