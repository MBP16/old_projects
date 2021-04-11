#include <stdio.h>

int main(void)
{
	int num1=10;
	int num2=20;

	int * p1;
	int * p2;
	int * temp;

	/* p1은 num1을 p2는 num2를 가리킴 */
	p1=&num1;
	p2=&num2;

	printf("p1 참조 값: %d \n", *p1);
	printf("p2 참조 값: %d \n\n", *p2);

	/* p1과 p2가 저장하고 있는 값 교체 */
	temp=p1;
	p1=p2;
	p2=temp;

	printf("p1 참조 값: %d \n", *p1);
	printf("p2 참조 값: %d \n\n", *p2);

	return 0;
}