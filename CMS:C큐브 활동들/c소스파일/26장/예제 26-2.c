#include <stdio.h>

void ShowData(const int * p);

int main(void)
{
	int num1=10;
	int num2=20;

	int * const ptr1=&num1;
	int * const ptr2;  // ����� ���ÿ� ���� ������!

	// ptr2=&num2;
	// ptr1=&num2;

	(*ptr1)++;
	ShowData(ptr1);

	return 0;
}

void ShowData(const int * p)
{
	/* 
	   �� �ȿ����� p�� ����Ű�� 
	   ������ ���� �ٲ� �� ����.
	*/

	printf("%d \n", *p);
}