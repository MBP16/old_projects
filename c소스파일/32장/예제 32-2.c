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
	printf("���� �Է�: ");
	scanf("%d", &(buf.iBuf));

	printf("���� 2����Ʈ: %u \n", buf.sBuf.upper);
	printf("���� 2����Ʈ: %u \n", buf.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[3]);

	return 0;
}