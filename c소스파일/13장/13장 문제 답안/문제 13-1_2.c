#include <stdio.h>

int RetABS(int num);

int main(void)
{
	printf("+7�� ���밪: %d \n", RetABS(+7));
	printf("-3�� ���밪: %d \n", RetABS(-3));
	printf("�ֱ� ��ȯ ���밪: %d \n", RetABS(0));

	return 0;
}

int RetABS(int num)
{
	static int abs;

	if(num>0)
		abs=num;

	if(num<0)
		abs=num*(-1);

	return abs;	
}

