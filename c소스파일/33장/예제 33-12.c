#include <stdio.h>

typedef struct __friend 
{
    char name[10];
    char sex;
    int age;
} friend;

int main(void)
{
	int ret;
	FILE * fp=fopen("friend.bin", "rb");
	friend fren;

	while(1)
	{
		ret=fread((void*)&fren, sizeof(friend), 1, fp);
		if(ret<1)
			break;

		printf("%s %c %d \n", fren.name, fren.sex, fren.age);
	}

	return 0;
}