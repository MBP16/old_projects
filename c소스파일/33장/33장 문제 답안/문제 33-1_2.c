#include <stdio.h>

int main(void)
{
	FILE * fp=fopen("mystory.txt", "at");

	fputs("#��ܸԴ� ����: «��, ������ \n", fp);
	fputs("#���: �౸ \n", fp);

	fclose(fp);
	return 0;
}
