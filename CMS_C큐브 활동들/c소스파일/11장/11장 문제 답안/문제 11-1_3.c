#include <stdio.h>

int main(void)
{
	int num=-1;    /* while���� ù ���ǰ˻簡 ���� �Ǿ�� �ϹǷ�... */
	int sum=0;

	while(num)
	{
		printf("���� �Է�: ");
		scanf("%d", &num);
		sum+=num;
	}

	printf("�Էµ� ������ ��: %d \n", sum);

	return 0;
}
