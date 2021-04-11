#include <stdio.h>
#define PI  3.14

typedef struct __point
{
	double xPos;
	double yPos;
} point;

typedef struct __circle
{
	point center;      // ���� �߽�
	double rad;    // ������
} circle;

void ShowCircleInfo(const circle * ptr)
{
	printf("���� �߽�: [%g, %g] \n", 
		(ptr->center).xPos, (ptr->center).yPos);
	printf("���� ����: %g \n",
		(ptr->rad)*(ptr->rad)*PI);
}

int main(void)
{
	circle cl={
		{1.1, 2.2},    // center �ʱ�ȭ
		2.5      // ������ �ʱ�ȭ
	};

	ShowCircleInfo(&cl);

	return 0;
}