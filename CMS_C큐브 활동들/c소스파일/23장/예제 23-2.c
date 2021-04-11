#include <stdio.h>

int main(void)
{
	int num1=3;
	double num2=3.15;

	int * ptr1=&num1;
	double * ptr2=&num2;

	int** dptr1=&ptr1;
	double** dptr2=&ptr2;


	printf("ptr1의 저장 값: %#x \n", ptr1);
	printf("ptr1의 주소 값: %#x \n\n", dptr1);

	printf("ptr2의 저장 값: %#x \n", ptr2);
	printf("ptr2의 주소 값: %#x \n\n", dptr2);

	return 0;
}