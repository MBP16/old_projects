#include <stdio.h>

#define PI 3.14
#define PROUDCT(X, Y)   ((X)*(Y))
#define CIRCLE_AREA(R)  (PROUDCT((R), (R))*PI)

int main(void)
{
	double rad=2.1;
	printf("������ %g�� ���� ����: %g \n", rad, CIRCLE_AREA(rad));

	return 0;
}