#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	int* arrPtr[3]={&n1, &n2, &n3};

	int i;
	for(i=0; i<3; i++)
	{
		printf("숫자 입력: ");
		scanf("%d", arrPtr[i]);
	}

	printf("입력된 숫자의 총 합은 %d 입니다 \n", 
		*arrPtr[0] + *arrPtr[1] + *arrPtr[2]);

	return 0;
}