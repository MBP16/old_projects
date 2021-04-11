#include <stdio.h>

typedef struct __point
{
	double xPos;
	double yPos;
} point;


int main(void)
{
	point pnt={1.1, 2.2};

	printf("구조체 pnt의 주소: %#x \n", &pnt);
	printf("구조체 pnt의 첫 번째 멤버의 주소: %#x \n", &(pnt.xPos));

	return 0;
}