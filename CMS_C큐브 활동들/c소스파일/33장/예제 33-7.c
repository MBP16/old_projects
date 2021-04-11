#include <stdio.h>

int main(void)
{
	int ch;
	char str[100];
	int num;

	/* 문자의 입력과 출력 */
	ch=fgetc(stdin);
	fputc(ch, stdout);
	ch=fgetc(stdin);   
	fputc(ch, stdout);

	/* 문자열의 입력과 출력 */
	fgets(str, 100, stdin);
	fputs(str, stdout);

	/* 서식 문자열 형태의 입력과 출력 */
	fscanf(stdin, "%d %c", &num, &ch);
	fprintf(stdout, "숫자: %d, 문자: %c \n", num, ch);	

	return 0;
}