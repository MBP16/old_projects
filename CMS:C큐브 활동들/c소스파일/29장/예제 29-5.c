#include <stdio.h>

int main(void)
{
	char ch;

	while(1)
	{
		printf("���� �Է�: ");
		ch=getchar();
		if(ch==EOF)
			break;

		fflush(stdin);
		printf("�Է� ����: %c \n", ch);
	}

	printf("�̿��� �ּż� ���� �帳�ϴ�. \n");

	return 0;
}