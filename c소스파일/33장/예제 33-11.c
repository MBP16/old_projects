#include <stdio.h>

typedef struct __friend 
{
    char name[10];
    char sex;
    int age;
} friend;

int main(void)
{
	int i;
	FILE * fp=fopen("friend.bin", "wb");
	friend fren;

	for(i=0; i<3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf("%s %c %d", fren.name, &(fren.sex), &(fren.age));
		fflush(stdin);

		fwrite((void*)&fren, sizeof(friend), 1, fp);
	}

	return 0;
}