#include <stdio.h>
#include <stdlib.h>

void FirstFunc(void);
void SecondFunc(void);
void ThirdFunc(void);

int main(void)
{
	if(!atexit(FirstFunc))
		printf("ù ��° �Լ� ������ ���\n");

	if(!atexit(SecondFunc))
		printf("�� ��° �Լ� ������ ���\n");

	if(!atexit(ThirdFunc))
		printf("�� ��° �Լ� ������ ���\n\n");

	return 0;
}

void FirstFunc(void)
{
	printf("ù ��° ��� �Լ�.\n");
}

void SecondFunc(void)
{
	printf("�� ��° ��� �Լ�.\n");
}

void ThirdFunc(void)
{
	printf("�� ��° ��� �Լ�.\n");
}