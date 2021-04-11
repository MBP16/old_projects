#include <stdio.h>

const int KIND=1;  /* 00000001  */
const int ADD=2;   /* 00000010  */
const int MIN=4;   /* 00000100  */

int opStatus;

void SetShowStatus(int ste);
void ShowOperationResult(int n1, int n2);

int main(void)
{
	SetShowStatus(KIND | ADD | MIN);

	printf("1차 출력........ \n");
	ShowOperationResult(5, 2);
	printf("\n");

	SetShowStatus(ADD | MIN);

	printf("2차 출력........ \n");
	ShowOperationResult(4, 3);
	printf("\n");

	return 0;
}

void SetShowStatus(int ste)
{
	opStatus=ste;
}

void ShowOperationResult(int n1, int n2)
{
	if(opStatus & KIND)
	{
		if(opStatus & ADD)
			printf("%d와 %d의 합은 %d입니다. \n", n1, n2, n1+n2);
		if(opStatus & MIN)
			printf("%d와 %d의 차는 %d입니다. \n", n1, n2, n1-n2);
	}
	else
	{
		if(opStatus & ADD)
			printf("%d + %d = %d \n", n1, n2, n1+n2);
		if(opStatus & MIN)
			printf("%d - %d = %d \n", n1, n2, n1-n2);
	}
}