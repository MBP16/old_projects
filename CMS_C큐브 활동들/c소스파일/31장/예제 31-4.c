#include <stdio.h>

struct __point
{
	double xPos;
	double yPos;
};
typedef struct __point point;

point IncrePos(point pnt)
{
	pnt.xPos++;
	pnt.yPos++;
	return pnt;
}

int main(void)
{
	point p1, p2, p3;
	p1.xPos=0.5;
	p1.yPos=1.5;

	p2=p1;
	p3=IncrePos(p2);
	
	printf("X: %g \n", p3.xPos);
	printf("Y: %g \n", p3.yPos);
	return 0;
}
