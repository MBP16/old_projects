#include <stdio.h>

int main(void)
{
	int i, j;
	for(i=0; i<3; i++)
	{
		printf("*** �ٱ��� for�� %d�� ȸ�� *** \n", i+1);

		for(j=0; j<3; j++)
			printf("������ for�� %d�� ȸ�� \n", j+1);

		printf("\n");    // ���� ���� ����� ����
	}
	return 0;
}