#include <stdio.h>

int main(void)
{
	int fstHighScore=0;    // 1�� ����
	int sndHighScore=0;    // 2�� ����
	
	int stArr[10];
	int i;

	for(i=0; i<10; i++)
	{
		printf("���� �Է� %d:", i+1);
		scanf("%d", &stArr[i]);

		if(stArr[i]>=fstHighScore)
		{
			sndHighScore=fstHighScore;
			fstHighScore=stArr[i];
		}
		else if(stArr[i]<fstHighScore && stArr[i]>sndHighScore)
		{
			sndHighScore=stArr[i];
		}
	}

	printf("A ������ %d�� �̻��� �Ǿ�� �մϴ�. \n", sndHighScore);

	return 0;
}