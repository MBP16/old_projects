#include <stdio.h>

int main(void)
{
	printf("���� ��: %d \n", __LINE__);
	printf("���� ��: %s \n", __FILE__);
	printf("��ó�� �ð�: %s \n", __TIME__);
	printf("��ó�� ��¥: %s \n", __DATE__);

	return 0;
}