#include <stdio.h>
#define BUF_SIZE  30

int main(void)
{
	char str[BUF_SIZE];

	FILE * src=fopen("src.txt", "rt");
	FILE * des=fopen("dst.txt", "wt");
	
	if(src==NULL || des==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	while(fgets(str, BUF_SIZE, src)!=NULL)
		fputs(str, des);

	if(feof(src)!=0)
		puts("파일복사 완료!");
	else
		puts("파일복사 실패!");

	fclose(src);
	fclose(des);
	return 0;
}