#include <stdio.h>

/* 정수형 나눗셈의 몫 반환 함수*/
int Quotient(int n1, int n2)
{
	return n1 / n2;
}

/* 정수형 나눗셈의 나머지 반환 함수*/
int Remainder(int n1, int n2)
{
	return n1 % n2;
}

/* 정수형 나눗셈의 계산 및 결과 출력*/
void IntDivide(int n1, int n2)
{
	printf("%d/%d의 몫: %d \n", n1, n2, Quotient(n1, n2));
	printf("%d/%d의 나머지: %d \n", n1, n2, Remainder(n1, n2));
}

int main(void)
{
	printf("5 나누기 2의 결과 ***** \n");
	IntDivide(5, 2);
	printf("\n");   // 한 줄 건너 뛰기

	printf("12 나누기 5의 결과 ***** \n");
	IntDivide(12, 5);
	printf("\n");

	return 0;
}