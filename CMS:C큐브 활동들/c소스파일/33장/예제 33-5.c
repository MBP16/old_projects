#include <stdio.h>
#define BUF_SIZE  30

int main(void)
{
	char str[BUF_SIZE];

	FILE * src=fopen("src.txt", "rt");
	FILE * des=fopen("dst.txt", "wt");
	
	if(src==NULL || des==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	while(fgets(str, BUF_SIZE, src)!=NULL)
		fputs(str, des);

	if(feof(src)!=0)
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");

	fclose(src);
	fclose(des);
	return 0;
}