#include <stdio.h>

typedef struct __point
{
	double xPos;
	double yPos;
} point;


int main(void)
{
	point pnt={1.1, 2.2};

	printf("����ü pnt�� �ּ�: %#x \n", &pnt);
	printf("����ü pnt�� ù ��° ����� �ּ�: %#x \n", &(pnt.xPos));

	return 0;
}