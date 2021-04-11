#include <stdio.h>
#include <stdlib.h>
#define PI  3.14

typedef struct __point
{
	double xPos;
	double yPos;
} point;

typedef struct __circle
{
	point * cntPtr;
	double rad;   
} circle;

void ShowCircleInfo(const circle * ptr)
{
	printf("원의 중심: [%g, %g] \n", 
		(ptr->cntPtr)->xPos, (ptr->cntPtr)->yPos);
	printf("원의 넓이: %g \n",
		(ptr->rad)*(ptr->rad)*PI);
}

int main(void)
{
	circle cl={NULL, 2.5};
	cl.cntPtr=(point*)malloc(sizeof(point));

	cl.cntPtr->xPos=1.1;
	cl.cntPtr->yPos=2.2;

	ShowCircleInfo(&cl);
	free(cl.cntPtr);
	return 0;
}