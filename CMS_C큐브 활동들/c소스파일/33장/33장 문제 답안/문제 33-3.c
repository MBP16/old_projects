#include <stdio.h>
#include <string.h>
long GetFileSize(FILE * fp);

int main(void)
{
	char str[100];
	FILE * fp=fopen("ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %ld \n", GetFileSize(fp));	
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %ld \n", GetFileSize(fp));	
	fgets(str, 100, fp);
	fputs(str, stdout);

	return 0;
}


long GetFileSize(FILE * fp)
{
	long fpos;
	long fsize;
	fpos=ftell(fp);  /* 파일 위치 지시자 정보 백업 */

	fseek(fp, 0, SEEK_END);
	fsize=ftell(fp);
	fseek(fp, fpos, SEEK_SET);  /* 파일 위치 지시자 정보 복구 */
	return fsize;
}