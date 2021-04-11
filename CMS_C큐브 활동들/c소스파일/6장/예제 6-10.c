#include <stdio.h>

int main(void)
{
	int A=1;
	int B=0;
	int result;

	result = (B && ++A);
	printf("%d \n", A);

	result = (A || ++B);
	printf("%d \n", B);

	return 0;
}
