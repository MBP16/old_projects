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
	printf("공용체 uniBox의 크기: %d 바이트 \n", sizeof(uniBox));

	strcpy(uni.data3, "공유합시다.");
	puts(uni.data1);
	puts(uni.data2);

	strcpy(uni.data1, "변경되었습니다.");
	puts(uni.data2);
	puts(uni.data3);

	return 0;
}