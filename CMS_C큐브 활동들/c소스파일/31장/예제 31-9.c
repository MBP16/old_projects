#include <stdio.h>
#define PI  3.14

typedef struct __point
{
	double xPos;
	double yPos;
} point;

typedef struct __circle
{
	point center;      // 원의 중심
	double rad;    // 반지름
} circle;

void ShowCircleInfo(const circle * ptr)
{
	printf("원의 중심: [%g, %g] \n", 
		(ptr->center).xPos, (ptr->center).yPos);
	printf("원의 넓이: %g \n",
		(ptr->rad)*(ptr->rad)*PI);
}

int main(void)
{
	circle cl={
		{1.1, 2.2},    // center 초기화
		2.5      // 반지름 초기화
	};

	ShowCircleInfo(&cl);

	return 0;
}