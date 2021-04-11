#include <stdio.h>

int main(void)
{
	int ch;

	FILE * src=fopen("src.txt", "rt");
	FILE * des=fopen("dst.txt", "wt");
	
	if(src==NULL || des==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	while((ch=fgetc(src))!=EOF)
		fputc(ch, des);

	fclose(src);
	fclose(des);

	puts("���Ϻ��� �Ϸ�!");	
	return 0;
}