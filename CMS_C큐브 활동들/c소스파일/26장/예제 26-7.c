#include <stdio.h>

int main(int argc, char * argv[])
{
	int idx=0;

	/* argc�� ����� �� ��ȸ */
	printf("argc: %d \n", argc);

	/* argv�� �����ϴ� ���ڿ��� ��� */
	while(argv[idx] != NULL)
	{
		printf("argv[%d]: %s \n", idx, argv[idx]);
		idx++;
	}

	return 0;
}
