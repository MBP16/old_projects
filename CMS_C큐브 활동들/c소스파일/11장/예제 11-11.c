#include <stdio.h>

int main(void)
{

	int i, j;

	i=0;
	for( ; (i++)<3; )
		printf("조건식만 존재 \n");
	
	for(i=0, j=5; i<j; i++, j--)
		printf("콤마 연산자의 활용 \n");

	for( ; ; )
	{
		printf("두 개의 정수 입력: ");
		scanf("%d %d", &i, &j);
		if(j==0)
			break;

		printf("몫: %d, 나머지: %d \n", i/j, i%j); 
	}

	printf("for문에 대한 연구 끝! \n");
	return 0;
}