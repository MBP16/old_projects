#include <stdio.h>
#define DIFF_ABS(X, Y)  ((x)>(y)? (x)-(y):(y)-(x))

int main(void)
{
	printf("�� ���� ��: %d \n", DIFF_ABS(5, 7));
	printf("�� ���� ��: %g \n", DIFF_ABS(1.8, -1.4));

	return 0;
}