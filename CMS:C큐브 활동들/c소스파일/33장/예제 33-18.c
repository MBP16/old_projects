#include <stdio.h>
#define STR_LEN    100

int main(void)
{
	char str[STR_LEN];
	FILE * fp=fopen("readwrite.txt", "w+t");
	long rpos;

	/* ������ ���� */
	fputs("���� ��ħ�Դϴ�. \n", fp);
	fputs("��ħ �Ļ�� �ϼ̳���? \n", fp);

	/* ������ �б� ��ȯ */
	fflush(fp);
	rewind(fp);
	fgets(str, STR_LEN, fp);
	fputs(str, stdout);
	rpos=ftell(fp);

	/* ������ ���� ��ȯ */
	fflush(fp);
	fseek(fp, 0, SEEK_END);
	fputs("����� �����̱���. \n", fp);
	fputs("���� ��ٵ� �սô�. \n", fp);

	/* ������ �б� ��ȯ */
	fflush(fp);
	fseek(fp, rpos, SEEK_SET);
	fgets(str, STR_LEN, fp);
	fputs(str, stdout);

	fclose(fp);
	return 0;
}