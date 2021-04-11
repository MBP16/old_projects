#include <stdio.h>

int main(void)
{
	char n1 = 127;
	short n2 = 32767;
	long long n3 = 9223372036854775807;

	printf("char형 변수 최대 값: %d \n", n1);
	printf("short형 변수 최대 값: %d \n", n2);
	printf("long long형 변수 최대 값: %d \n", n3);

	return 0;
}