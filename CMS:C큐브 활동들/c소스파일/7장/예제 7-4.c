#include <stdio.h>

/* ������ �������� �� ��ȯ �Լ�*/
int Quotient(int n1, int n2)
{
	return n1 / n2;
}

/* ������ �������� ������ ��ȯ �Լ�*/
int Remainder(int n1, int n2)
{
	return n1 % n2;
}

/* ������ �������� ��� �� ��� ���*/
void IntDivide(int n1, int n2)
{
	printf("%d/%d�� ��: %d \n", n1, n2, Quotient(n1, n2));
	printf("%d/%d�� ������: %d \n", n1, n2, Remainder(n1, n2));
}

int main(void)
{
	printf("5 ������ 2�� ��� ***** \n");
	IntDivide(5, 2);
	printf("\n");   // �� �� �ǳ� �ٱ�

	printf("12 ������ 5�� ��� ***** \n");
	IntDivide(12, 5);
	printf("\n");

	return 0;
}