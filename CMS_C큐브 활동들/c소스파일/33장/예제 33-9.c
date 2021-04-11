#include <stdio.h>

int main(void)
{
	char name[10];
	char sex;
	int age;

	int i;
	FILE * fp=fopen("friend.txt", "wt");

	for(i=0; i<3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		fflush(stdin);

		fprintf(fp, "%s %c %d", name, sex, age);
	}

	return 0;
}