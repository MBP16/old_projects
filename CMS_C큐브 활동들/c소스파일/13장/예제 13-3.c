#include <stdio.h>

void CountFctCall(void);

int main(void)
{
	CountFctCall();
	CountFctCall();
	CountFctCall();
	
	return 0;
}

void CountFctCall(void)
{
	static int cnt=1;
	printf("�� �Լ��� %d��° ȣ��Ǿ����ϴ�. \n", cnt);
	cnt++;
}