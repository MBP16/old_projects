#include <stdio.h>

void Square(int * ptr);

int main(void)
{
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);
	Square(&num);

	printf("������ ���: %d \n", num);
	return 0;
}

void Square(int * ptr)
{
	(*ptr)*=(*ptr);
}
