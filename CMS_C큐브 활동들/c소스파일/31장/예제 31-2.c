#include <stdio.h>

/*** point라는 이름의 자료형 정의 ***/
struct point
{
	double xPos;
	double yPos;
};

int main(void)
{
	/** 변수의 선언 **/
	double num;
	struct point pnt;

	/** 변수의 초기화 **/
	num=1.2;
	pnt.xPos=2.2;
	pnt.yPos=3.4;

	/** 초기화된 값의 출력 **/
	printf("num: %g \n", num);
	printf("pnt.xPos: %g \n", pnt.xPos);
	printf("pnt.yPos: %g \n\n", pnt.yPos);

	/** 변수의 크기 계산 **/
	printf("num의 크기: %d바이트 \n", sizeof(num));
	printf("pnt의 크기: %d바이트 \n", sizeof(pnt));

	return 0;
}
