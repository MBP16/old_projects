#include <stdio.h>

int main(void)
{
	long num1;
	long long num2;

	double num3;
	long double num4;

	printf("���� �Է�(long): ");
	scanf("%ld", &num1);
	printf("�Էµ� ����: %ld \n", num1);

	printf("���� �Է�(long long): ");
	scanf("%lld", &num2);
	printf("�Էµ� ����: %lld \n", num2);

	printf("�Ǽ� �Է�(double): ");
	scanf("%lf", &num3);
	printf("�Էµ� ����: %f \n", num3);

	printf("�Ǽ� �Է�(long double): ");
	scanf("%Lf", &num4);
	printf("�Էµ� ����: %Lf \n", num4);
	return 0;
}