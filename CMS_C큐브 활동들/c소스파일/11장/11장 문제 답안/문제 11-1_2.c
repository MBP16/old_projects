#include <stdio.h>

int main(void)
{
	int num;
	int i=1;

	printf("����� 3�� ����� ����: ");
	scanf("%d", &num);

	while(num--)
	{
		printf("%d ", i*3);
		i++;
	}
	printf("\n");

	return 0;
}