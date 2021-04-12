#include <stdio.h>

typedef enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec } month;
typedef struct date { month m; int d; } date;

date nextday(date d)
{
	date newday;
	int last_day;

	switch (d.m)
	{
		case jan:
		case mar:
		case may:
		case jul:
		case aug:
		case oct:
		case dec:
			last_day = 31;
			break;
		case feb:
			last_day = 28;
			break;
		case apr:
		case jun:
		case sep:
		case nov:
		default:
			last_day = 30;
			break;

	}

	if (d.d + 1 > last_day) {
		newday.m = (d.m + 1) % 12;
		newday.d = (d.d + 1) % last_day;
	}
	else {
		newday.m = d.m;
		newday.d = d.d + 1;
	}

	return newday;
}

void printdate(date d)
{
	switch (d.m)
	{
		case jan: printf("jan"); break;
		case feb: printf("feb"); break;
		case mar: printf("mar"); break;
		case apr: printf("apr"); break;
		case may: printf("may"); break;
		case jun: printf("jun"); break;
		case jul: printf("jul"); break;
		case aug: printf("aug"); break;
		case sep: printf("sep"); break;
		case oct: printf("oct"); break;
		case nov: printf("nov"); break;
		case dec: printf("dec"); break;
		default: printf("wrong date\n"); return;
	}
	printf(" %d\n", d.d);
}
int main()
{
	date today;
	today.m = dec;
	today.d = 12;
	date next = nextday(today);
	printdate(next);

	today.m = jan;
	today.d = 1;
	next = nextday(today);
	printdate(next);

	today.m = feb;
	today.d = 28;
	next = nextday(today);
	printdate(next);

	today.m = mar;
	today.d = 14;
	next = nextday(today);
	printdate(next);

	today.m = oct;
	today.d = 31;
	next = nextday(today);
	printdate(next);

	today.m = dec;
	today.d = 31;
	next = nextday(today);
	printdate(next);

	return 0;
}
