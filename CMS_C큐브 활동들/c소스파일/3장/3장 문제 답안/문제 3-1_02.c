#include <stdio.h>
	
int main(void)
{
	printf("\\n은 다음 행의 맨 앞으로 커서를 이동시킵니다. \n");
	printf("\\a는 삑~ 소리를 내고요,"
	       "\\t는 수평 탭 키의 입력을 의미합니다. \n");
	printf("이처럼 이스케이프 시퀀스는 \\로 시작을 합니다. \n");

	return 0;
}