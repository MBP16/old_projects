#include <stdio.h>
#include <math.h>
#define MATH_PI    3.14159265

int main(void)
{
	double input, output;
	input=MATH_PI/2;

	output=sin( input );
	printf("sin(%g) = %g \n", input, output);

	input=asin(output);
	printf("asin(%g) = %g \n", output, input);

	return 0;
}