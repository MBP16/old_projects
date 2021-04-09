#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	printf("fabs(-2.4): %g \n", fabs(-2.4));
	printf("ceil(-2.4): %g \n", ceil(-2.4));
	printf("floor(-2.4): %g \n", floor(-2.4));

	printf("exp(1): %g \n", exp(1));
	printf("M_E: %g \n", M_E);

	printf("pow(2, 3): %g \n", pow(2, 3));
	printf("log(M_E): %g \n", log(M_E));
	printf("log10(10): %g \n", log10(10));
	printf("sqrt(9): %g \n", sqrt(9));

	return 0;
}