#include <stdio.h>

int main(void)
{
	int cnt, num;
	int total=0;
	int itrCnt;

	printf("�Է��� ������ ����: ");
	scanf("%d", &cnt);
	
	itrCnt=cnt;

	while(itrCnt>0)
	{
		printf("�����Է�: ");
		scanf("%d", &num);
		total+=num;
		itrCnt--;
	}

	printf("�Էµ� ������ ��ü���: %f \n", (double)total/cnt);

	return 0;
}
