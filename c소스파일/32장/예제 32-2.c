#include <stdio.h>

typedef struct __dbShort
{
	unsigned short upper;
	unsigned short lower;
}dbShort;

typedef union __readbuf
{
	int iBuf;
	char bBuf[4];
	dbShort sBuf;
} readBuf;

int main(void)
{
	readBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트: %u \n", buf.sBuf.upper);
	printf("하위 2바이트: %u \n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);

	return 0;
}