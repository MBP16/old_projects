#include <stdio.h>
#include <string.h>
#define BUF_SIZE    100

int main(void)
{
	char str[BUF_SIZE];
	char srch[20];
	FILE * fp;

	printf("�˻� ���: ");
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

	puts("�˻� ����� �������� �ʽ��ϴ�.");
	fclose(fp);
	return 0;
}