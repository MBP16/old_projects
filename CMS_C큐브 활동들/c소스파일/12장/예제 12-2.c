#include <stdio.h>

int main(void)
{
	char   ch1 = 'A';
	short  ch2 = 'A' - 'B' + 'C';
	int    ch3 = 'C' % 12 ;

	printf("%c %c %c \n", ch1, ch2, ch3);
	printf("%d %d %d \n", ch1, ch2, ch3);

	printf("이스케이프 시퀀스 경고음: %d \n", '\a');

	return 0;
}