#include <stdio.h>
#include <stdlib.h>

void FuncRegist(void);

int main(void)
{
	int sel;

	if(!atexit(FuncRegist))
		printf("�Լ� ������ ���\n");

	printf("�������� 1, ���������� 2: ");
	scanf("%d", &sel);

	if(sel==1)
		exit(EXIT_SUCCESS);
	else
		abort();
	
	return 0;
}

void FuncRegist(void)
{
	printf("���α׷��� ���������� ����Ǿ����ϴ�.\n");
}