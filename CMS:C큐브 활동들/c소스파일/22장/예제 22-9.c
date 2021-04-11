#include <stdio.h>

int main(void)
{
	int num1=7;
	double num2=0.0012;

	*(&num1)+=1000;
	*(&num2)+=1000.0; 

	printf("%d \n", num1);
	printf("%f \n", num2);


	return 0;
}