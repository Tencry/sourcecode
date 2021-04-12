#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main(void)
{
	double deg = 0.0;
	printf("Input degree (0-1): ");
	scanf("%lf", &deg);
	if (deg > 0.0 && deg < 1.0) {
		double rad = deg * (PI / 180);
		printf("%lf\n", sin(rad));
	}
	else {
		printf("Input must be greater then 0.0 and less then 1.0\n");
	}
	return EXIT_SUCCESS;
}
