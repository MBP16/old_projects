#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	printf("������ ����: 0�̻� %d ���� \n", RAND_MAX);

	for(i=0; i<7; i++)
		printf("%-10d", rand());

	return 0;
}