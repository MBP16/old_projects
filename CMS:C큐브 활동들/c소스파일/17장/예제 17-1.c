#include <stdio.h>

int main(void)
{
	int st1, st2, st3;
	int fstHighScore=0;    // 1�� ����
	int sndHighScore=0;    // 2�� ����

	printf("���� �Է�: ");
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

	printf("���� �Է�: ");
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

	printf("���� �Է�: ");
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

	printf("A ������ %d�� �̻��� �Ǿ�� �մϴ�. \n", sndHighScore);

	return 0;
}