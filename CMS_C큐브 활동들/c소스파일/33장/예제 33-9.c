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
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		fflush(stdin);

		fprintf(fp, "%s %c %d", name, sex, age);
	}

	return 0;
}