#include <stdio.h>
#define BUF_SIZE  30

int main(void)
{
	char buf[BUF_SIZE];
	int readCnt;

	FILE * src=fopen("lineSrc.bmp", "rb");
	FILE * des=fopen("lineCpy.bmp", "wb");
	
	if(src==NULL || des==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	while(1)
	{
		readCnt=fread((void*)buf, 1, BUF_SIZE, src);

		if(readCnt<BUF_SIZE)
		{
			if(feof(src)!=0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일복사 완료");
				break;
			}
			else
				puts("파일복사 실패");

			break;
		}
		fwrite((void*)buf, 1, BUF_SIZE, des);
	}

	fclose(src);
	fclose(des);
	return 0;
}