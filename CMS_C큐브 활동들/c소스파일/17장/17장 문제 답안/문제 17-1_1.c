#include <stdio.h>

int main(void)
{
	int fstHighScore=0;    // 1등 점수
	int sndHighScore=0;    // 2등 점수
	
	int stArr[10];
	int i;

	for(i=0; i<10; i++)
	{
		printf("점수 입력 %d:", i+1);
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

	printf("A 학점은 %d점 이상이 되어야 합니다. \n", sndHighScore);

	return 0;
}