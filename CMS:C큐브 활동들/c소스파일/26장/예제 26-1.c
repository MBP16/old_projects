#include <stdio.h>

void ShowData(const int * p);

int main(void)
{
	int num1=10;
	int num2=20;

	const int * ptr=&num1;

	//(*ptr)++;    // ������ ���� �߻�
	num1++;    // ������ ����!

	ShowData(&num1);

	ptr=&num2;
	ShowData(ptr);

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