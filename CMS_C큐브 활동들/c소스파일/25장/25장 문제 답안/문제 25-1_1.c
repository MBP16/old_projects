#include <stdio.h>

void Square(int * ptr);

int main(void)
{
	int num;
	printf("숫자 입력: ");
	scanf("%d", &num);
	Square(&num);

	printf("제곱의 결과: %d \n", num);
	return 0;
}

void Square(int * ptr)
{
	(*ptr)*=(*ptr);
}
