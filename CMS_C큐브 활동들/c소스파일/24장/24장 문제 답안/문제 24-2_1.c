#include <stdio.h>

int main(void)
{
	char str[30]="Orange Media";

	char* ptr=str;  // ���� �����Ƿ� ���Կ����� OK!
	int i;

	/* ������ ������ �̿��� ���ڿ� ��� */
	i=0;
	while(*(ptr+i) != '\0')
	{
		printf("%c", *(ptr+i));
		i++;
	}
	printf("\n");

	/* ���� ������ ���·� ������ ������ �̿��� ���ڿ� ��� */
	i=0;
	while(*(str+i) != '\0')
	{
		printf("%c", *(str+i));
		i++;
	}
	printf("\n");

	return 0;
}
