#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main(void)
{
	printf("�ﰢ�� ����(�غ� 4, ���� 2): %g \n", 
		TriangleArea(4, 2));
	printf("�� ����(������ 3): %g \n", 
		CircleArea(3));

	printf("���簢�� �ѷ�(�غ� 2.5, ���� 5.2): %g \n", 
		RectangleRound(2.5, 5.2));
	printf("���簢�� �ѷ�(���� ���� 3): %g \n", 
		SquareRound(3));
	return 0;
}