#include <stdio.h>

int main(void)
{
	int num=999999999;
	float * ptr;
	ptr=&num;

	printf("num에 저장된 값: %f \n", *ptr); 
	printf("num에 저장된 값: %d \n", *ptr); 

	return 0;
}