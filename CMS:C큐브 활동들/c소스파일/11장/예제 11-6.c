#include <stdio.h>

int main(void)
{
	int cnt=0;
	int n=0;

	printf("# 2�� 3�� ����� �ƴ� 100 ������ �ڿ����� \n");

	while((n++) < 100)
	{
		if(!(n%2) || !(n%3))  /* if((n%2)==0 || (n%3)==0) �� ���� */
			continue;
		
		printf("%d, ", n);
		cnt++;
	}

	printf("\n\n");
	printf("# 2�� 3�� ����� �ƴ� 100 ������ �ڿ����� ����: %d \n", cnt);
	
	return 0;
}