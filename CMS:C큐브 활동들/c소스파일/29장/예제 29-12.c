#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="�ѱ۵� �󸶵��� �������ڰ� �� �� �ֽ��ϴ�.";
	char * stPtr;

	stPtr=strstr(str, "�� �� �� �ֽ�");
	printf("���� ��ġ ���� ���ڿ�: %s \n", stPtr);

	return 0;
}

