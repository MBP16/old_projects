#include <stdio.h>

int main(void)
{
	int i, j;

	i=0;
	while(i++ < 10)
	{
		j=0;
		while(j++ < 10)
		{
			printf("[i, j] = [%d, %d] \n", i, j);

			if(i%2==0 && j%2==0)  //i�� j�� ���� 2�϶� ó������ ��!
				break;
		}
	}

	printf("��ø�� �ݺ��� ���� Ż��! \n");

	return 0;
}