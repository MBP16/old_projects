#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	int* arrPtr[3]={&n1, &n2, &n3};

	int i;
	for(i=0; i<3; i++)
	{
		printf("���� �Է�: ");
		scanf("%d", arrPtr[i]);
	}

	printf("�Էµ� ������ �� ���� %d �Դϴ� \n", 
		*arrPtr[0] + *arrPtr[1] + *arrPtr[2]);

	return 0;
}