#include <stdio.h>

int main(void)
{
	int st1, st2, st3;
	int fstHighScore=0;    // 1등 점수
	int sndHighScore=0;    // 2등 점수

	printf("점수 입력: ");
	scanf("%d", &st1);

	if(st1>=fstHighScore)
	{
		sndHighScore=fstHighScore;
		fstHighScore=st1;
	}
	else if(st1<fstHighScore && st1>sndHighScore)
	{
		sndHighScore=st1;
	}

	printf("점수 입력: ");
	scanf("%d", &st2);

	if(st2>=fstHighScore)
	{
		sndHighScore=fstHighScore;
		fstHighScore=st2;
	}
	else if(st2<fstHighScore && st2>sndHighScore)
	{
		sndHighScore=st2;
	}

	printf("점수 입력: ");
	scanf("%d", &st3);

	if(st3>=fstHighScore)
	{
		sndHighScore=fstHighScore;
		fstHighScore=st3;
	}
	else if(st3<fstHighScore && st3>sndHighScore)
	{
		sndHighScore=st3;
	}

	printf("A 학점은 %d점 이상이 되어야 합니다. \n", sndHighScore);

	return 0;
}