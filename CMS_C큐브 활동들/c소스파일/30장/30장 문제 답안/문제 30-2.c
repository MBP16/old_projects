#include <stdio.h>

#define  STRING_JOB(A, B)     #A "�� ������" #B "�Դϴ�."
#define  PRINT_STR(STR)        puts(STR);

int main(void)
{
	PRINT_STR(STRING_JOB(�̵���, ������));
	PRINT_STR(STRING_JOB(�ѻ��, ��ɲ�));

	return 0;
}