#include <stdio.h>

int main(void)
{
	int i=0;
	float real;
	
	real=0;
	for(i=0; i<30; i++)
		real=real+0.1;
	
	printf("0.1�� 30ȸ ���� ���: %f \n", real);

	real=0;
	for(i=0; i<50; i++)
		real=real+0.1;

	printf("0.1�� 50ȸ ���� ���: %f \n", real);

	real=0;
	for(i=0; i<100; i++)
		real=real+0.1;

	printf("0.1�� 100ȸ ���� ���: %f \n", real);

	return 0;
}