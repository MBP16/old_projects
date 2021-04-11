#include <stdio.h>
#include <string.h>
#define BUF_SIZE    100

int main(void)
{
	char str[BUF_SIZE];
	char srch[20];
	FILE * fp;

	printf("검색 대상: ");
	gets(srch);	
	
	fp=fopen("mystory.txt", "rt");
	while(fgets(str, BUF_SIZE, fp)!=NULL)
	{
		if(!strncmp(srch, str+1, strlen(srch)))
		{
			puts(str);
			fclose(fp);
			return 0;
		}
	}

	puts("검색 대상이 존재하지 않습니다.");
	fclose(fp);
	return 0;
}