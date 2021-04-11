#include <stdio.h>
#define STR_LEN    100

int main(void)
{
	char str[STR_LEN];
	FILE * fp=fopen("readwrite.txt", "w+t");
	long rpos;

	/* 데이터 쓰기 */
	fputs("좋은 아침입니다. \n", fp);
	fputs("아침 식사는 하셨나요? \n", fp);

	/* 데이터 읽기 전환 */
	fflush(fp);
	rewind(fp);
	fgets(str, STR_LEN, fp);
	fputs(str, stdout);
	rpos=ftell(fp);

	/* 데이터 쓰기 전환 */
	fflush(fp);
	fseek(fp, 0, SEEK_END);
	fputs("어느새 저녁이군요. \n", fp);
	fputs("일찍 퇴근들 합시다. \n", fp);

	/* 데이터 읽기 전환 */
	fflush(fp);
	fseek(fp, rpos, SEEK_SET);
	fgets(str, STR_LEN, fp);
	fputs(str, stdout);

	fclose(fp);
	return 0;
}