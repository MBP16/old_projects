#include <stdio.h>
int AddBetween(int n1, int n2);

int main( void )
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	printf("���� ���: %d \n", AddBetween(num1, num2));
	return 0;
}

int AddBetween(int n1, int n2)
{
	if(n1==n2)
		return n1;
	else if(n1<n2)
		return n1 + AddBetween(n1+1, n2);
	else
		return n2 + AddBetween(n1, n2+1);
}