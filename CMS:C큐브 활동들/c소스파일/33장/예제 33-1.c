#include <stdio.h>

int main(void)
{
	FILE * fp=fopen("C:\\Prog\\data.txt", "wt");
	if(fp==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);
	return 0;
}