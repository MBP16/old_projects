#include <stdio.h>
#include <string.h>

typedef union __uniBox
{
	char data1[15];
	char data2[30];
	char data3[45];
} uniBox;

int main(void)
{
	uniBox uni;
	printf("����ü uniBox�� ũ��: %d ����Ʈ \n", sizeof(uniBox));

	strcpy(uni.data3, "�����սô�.");
	puts(uni.data1);
	puts(uni.data2);

	strcpy(uni.data1, "����Ǿ����ϴ�.");
	puts(uni.data2);
	puts(uni.data3);

	return 0;
}