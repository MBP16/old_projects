#include <stdio.h>

int main(void)
{
	int * p1;
	double * p2;

	/* ������ �� Ȯ���ϱ� */
	printf("������ �� 1: %#x \n", p1);
	printf("������ �� 2: %#x \n\n", p2);

	/* �߸��� ���� */
	printf("� ������ ������? %d \n", *p1);
	printf("� �Ǽ��� ������? %f \n\n", *p2);

	/* ������ ���� */
	*p1=25;
	*p2=3.15;

	printf("����� ���� %d \n", *p1);
	printf("����� �Ǽ� %f \n\n", *p2);

	return 0;
}