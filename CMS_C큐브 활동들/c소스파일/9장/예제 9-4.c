#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	double d1, d2, d3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("�Էµ� ���� ���: %d, %d, %d \n\n", n1, n2, n3);

	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf %lf", &d1, &d2, &d3);
	printf("�Էµ� �Ǽ� ���: %f, %f, %f \n\n", d1, d2, d3);

	return 0;
}