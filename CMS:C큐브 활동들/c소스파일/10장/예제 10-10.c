#include <stdio.h>

int GOTOFCT(void);

int main(void)
{
	printf("������ �� ����! ");

	goto SPECIAL;

	printf("���� ���ƿ�����? ");

	return 0;
}

int GOTOFCT(void)
{
SPECIAL:
	return 123;

}