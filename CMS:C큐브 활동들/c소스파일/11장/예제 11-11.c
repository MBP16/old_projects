#include <stdio.h>

int main(void)
{

	int i, j;

	i=0;
	for( ; (i++)<3; )
		printf("���ǽĸ� ���� \n");
	
	for(i=0, j=5; i<j; i++, j--)
		printf("�޸� �������� Ȱ�� \n");

	for( ; ; )
	{
		printf("�� ���� ���� �Է�: ");
		scanf("%d %d", &i, &j);
		if(j==0)
			break;

		printf("��: %d, ������: %d \n", i/j, i%j); 
	}

	printf("for���� ���� ���� ��! \n");
	return 0;
}