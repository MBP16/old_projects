#include <stdio.h>

int main(void)
{
	float num1;
	float num2;
	float num3;

	printf("�Ǽ� �Է� 1(E-ǥ�������): ");
	scanf("%f", &num1);
	printf("�Էµ� �Ǽ� %g \n", num1);

	printf("�Ǽ� �Է� 2(E-ǥ�������): ");
	scanf("%g", &num2);
	printf("�Էµ� �Ǽ� %g \n", num2);

	printf("�Ǽ� �Է� 3(E-ǥ�������): ");
	scanf("%e", &num3);
	printf("�Էµ� �Ǽ� %g \n", num3);

	return 0;
}