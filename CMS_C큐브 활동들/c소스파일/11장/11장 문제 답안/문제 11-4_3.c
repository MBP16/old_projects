#include <stdio.h>

int main(void)
{
	int sum=0;
	int i;

	for(i=1; i<=100; i++)
	{
		if(!(i%3) || !(i%5))
			sum+=i;
	}

	printf("3�� ����� 5�� ����� ��: %d \n", sum);

	return 0;
}
