#include <stdio.h>

enum day { sun, mon, tue, wed, thu, fri, sat };
typedef enum day day;

void print_day(day d)
{
	switch (d) {
		case sun: printf("sunday"); break;
		case mon: printf("monday"); break;
		case tue: printf("tuesday"); break;
		case wed: printf("wednesday"); break;
		case thu: printf("thursday"); break;
		case fri: printf("friday"); break;
		case sat: printf("saturday"); break;
		default: printf("%d is an error", d);
	}
	putchar('\n');
}

day next_day(enum day d)
{
	return (d + 1) % 7;
}

int main()
{
	day today = fri;
	day anyday = today;
	print_day(today);
	for (int i = 0; i < 7; ++i)
	{
		anyday = next_day(anyday);
		print_day(anyday);
	}
	return 0;
}
