#include <stdio.h>

typedef struct box1
{
	int AAA;
	short BBB;
	short CCC;
} box1;

typedef struct box2
{
	short BBB;
	int AAA;
	short CCC;
} box2;

int main(void)
{
	box1 bx1;
	box2 bx2;

	printf("����ü box1�� ���� ũ��: %d \n", sizeof(bx1));
	printf("����ü box2�� ���� ũ��: %d \n", sizeof(bx2));

	return 0;
}