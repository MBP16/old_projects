#include <stdio.h>
int PowerOfTwo(int n);

int main( void )
{
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	printf("2�� %d��: %d \n", num, PowerOfTwo(num));
	return 0;
}

int PowerOfTwo(int n)
{
	if(n==0)
		return 1;

	return 2*PowerOfTwo(n-1);
}
