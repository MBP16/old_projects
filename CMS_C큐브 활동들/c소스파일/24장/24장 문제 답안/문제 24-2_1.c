#include <stdio.h>

int main(void)
{
	char str[30]="Orange Media";

	char* ptr=str;  // 형이 같으므로 대입연산이 OK!
	int i;

	/* 포인터 연산을 이용한 문자열 출력 */
	i=0;
	while(*(ptr+i) != '\0')
	{
		printf("%c", *(ptr+i));
		i++;
	}
	printf("\n");

	/* 위와 동일한 형태로 포인터 연산을 이용한 문자열 출력 */
	i=0;
	while(*(str+i) != '\0')
	{
		printf("%c", *(str+i));
		i++;
	}
	printf("\n");

	return 0;
}
