#include <stdio.h>

int main(void)
{
	int num1=10;
	int num2=20;

	int * p1;
	int * p2;
	int * temp;

	/* p1�� num1�� p2�� num2�� ����Ŵ */
	p1=&num1;
	p2=&num2;

	printf("p1 ���� ��: %d \n", *p1);
	printf("p2 ���� ��: %d \n\n", *p2);

	/* p1�� p2�� �����ϰ� �ִ� �� ��ü */
	temp=p1;
	p1=p2;
	p2=temp;

	printf("p1 ���� ��: %d \n", *p1);
	printf("p2 ���� ��: %d \n\n", *p2);

	return 0;
}