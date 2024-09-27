//calc_main.c

#include <stdio.h>
#include "calc.h"

int main(void) {
	double x = 2, y = 3;

	printf("x: %.1f + y: %.1f = %.1f\n", x, y, sum(x, y));
	printf("x: %.1f - y: %.1f = %.1f\n", x, y, minus(x, y));
	printf("x: %.1f X y: %.1f = %.1f\n", x, y, multiply(x, y));
	printf("x: %.1f / y: %.1f = %.6f\n", x, y, div(x, y));
	printf("x: %d %% y: %.d = %d\n",
		(int)x, (int)y, rem((int)x, (int)y));

	//�߰��κ�
	printf("x: %.1f^y: %.1f = %.1f\n", x, y, power(x, y));
	printf("sqrt of x: %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y: %.1f =%.1f\n", y, areaOfCircle(y));
	printf("circ of y: %.1f = %.1f\n", y, circumferenceOfCircle(y));

	return 0;
}
