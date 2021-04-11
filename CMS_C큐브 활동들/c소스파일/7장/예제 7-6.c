#include <stdio.h>

int Increment(int n);  /* Increment 함수의 선언 */
int TwoIncrement(int n);

int main(void)
{
	int num = 2;

	num = Increment(num);
	printf("num: %d \n", num);

	num = TwoIncrement(num);
	printf("num: %d \n", num);

	return 0;
}

int TwoIncrement(int n)
{
	n = Increment(n);
	n = Increment(n);
	return n;
}

int Increment(int n)
{
	n++;
	return n;
}

