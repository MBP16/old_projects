#include <stdio.h>

int main(void)
{
	char ch;
	char num1;
	short num2;

	printf("���� �Է�: ");
	scanf("%c", &ch);
	printf("���ڷ� �ؼ��ϸ� %d, ���ڷ� �ؼ��ϸ� %c \n\n", ch, ch);

	printf("���� �Է�: ");
	scanf("%hhd", &num1);
	printf("���ڷ� �ؼ��ϸ� %d, ���ڷ� �ؼ��ϸ� %c \n\n", num1, num1);

	printf("���� �Է�: ");
	scanf("%hd", &num2);
	printf("�Էµ� ����: %d \n\n", num2);

	return 0;
}