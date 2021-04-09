#include <stdio.h>

int main(void)
{
	int * p1;
	double * p2;

	/* 쓰레기 값 확인하기 */
	printf("쓰레기 값 1: %#x \n", p1);
	printf("쓰레기 값 2: %#x \n\n", p2);

	/* 잘못된 연산 */
	printf("어떤 정수가 찍힐까? %d \n", *p1);
	printf("어떤 실수가 찍힐까? %f \n\n", *p2);

	/* 위험한 연산 */
	*p1=25;
	*p2=3.15;

	printf("저장된 정수 %d \n", *p1);
	printf("저장된 실수 %f \n\n", *p2);

	return 0;
}