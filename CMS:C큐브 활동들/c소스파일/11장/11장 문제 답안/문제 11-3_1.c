#include <stdio.h>

int main(void)
{
	int num;

	printf("��� Ƚ�� �Է�: ");
	scanf("%d", &num);

	//while(num--)
	//	printf("Hello world \n");

	if(num==0)
		return 0;

	do{
		printf("Hello world \n");
	}while(--num);

	return 0;
}
