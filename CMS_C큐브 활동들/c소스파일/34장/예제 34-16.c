#include <stdio.h>

#define PF(...)   printf(__VA_ARGS__)
#define SF(...)   scanf(__VA_ARGS__)

int main(void)
{
	int num1, num2;
	PF("�� ���� ���� �Է�: ");
	SF("%d %d", &num1, &num2);
	PF("%d+%d=%d \n", num1, num2, num1+num2);
	return 0;
}