#include <stdio.h>

int main(void)
{
	int x1, y1;
	int x2, y2;

	printf("ù ��° ���� ��ǥ �Է�: �� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	printf("%d + %d = %d \n", num1, num2, num1+num2);
	printf("%d - %d = %d \n", num1, num2, num1-num2);
	printf("%d * %d = %d \n", num1, num2, num1*num2);
	printf("%d / %d = %d...%d \n", num1, num2, num1/num2, num1%num2);

	return 0;
}