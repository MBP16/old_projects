#include <stdio.h>

int main(void)
{
	int i, j;

	i=2;
	while(i<10)
	{
		j=1;
		while(j<10)
		{
			printf("%d x %d = %d \n", i, j, i*j);
			j++;
		}

		printf("\n");    // ���� ���� ����� ����
		i++;
	}

	return 0;
}