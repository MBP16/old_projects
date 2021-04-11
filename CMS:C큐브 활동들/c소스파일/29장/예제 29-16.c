#include <stdio.h>

int main(void)
{
	int num1=24;
	float num2=7.15f;
	char str[]="Hi!";

	char strBuf[50];

	printf("%d %s %g \n", num1, str, num2);
	sprintf(strBuf, "%d %s %g \n", num1, str, num2);

	puts(strBuf);  // sprintf 함수에 의해 만들어진 문자열 출력
	return 0;
}

