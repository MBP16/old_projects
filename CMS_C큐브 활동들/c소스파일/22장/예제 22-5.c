#include <stdio.h>

int main(void)
{
	int num=999999999;
	float * ptr;
	ptr=&num;

	printf("num�� ����� ��: %f \n", *ptr); 
	printf("num�� ����� ��: %d \n", *ptr); 

	return 0;
}