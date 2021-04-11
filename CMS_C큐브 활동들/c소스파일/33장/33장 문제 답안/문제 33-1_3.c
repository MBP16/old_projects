#include <stdio.h>
#define BUF_SIZE    100

int main(void)
{
	char str[BUF_SIZE];
	FILE * fp=fopen("mystory.txt", "rt");

	while(fgets(str, BUF_SIZE, fp)!=NULL)
			printf(str);

	fclose(fp);
	return 0;
}
