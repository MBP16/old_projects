#include <stdio.h>
const int TRUE=1;
const int FALSE=0;

int kindSte;
int addSte;
int minSte;

void SetKindSte(int ste);
void SetAddOpSte(int ste);
void SetMinOpSte(int ste);
void ShowOperationResult(int n1, int n2);

int main(void)
{
	SetKindSte(TRUE);      // 친절 모드 출력 설정
	SetAddOpSte(TRUE);     // 덧셈 출력 설정
	SetMinOpSte(TRUE);     // 뺄셈 출력 설정

	printf("1차 출력........ \n");
	ShowOperationResult(5, 2);
	printf("\n");

	SetKindSte(FALSE);       // 친절 모드 출력 해제
	SetAddOpSte(FALSE);      // 덧셈 출력 해제
	
	printf("2차 출력........ \n");
	ShowOperationResult(4, 3);
	printf("\n");

	return 0;
}

void SetKindSte(int ste)
{
	kindSte=ste;
}

void SetAddOpSte(int ste)
{
	addSte=ste;
}

void SetMinOpSte(int ste)
{
	minSte=TRUE;
}

void ShowOperationResult(int n1, int n2)
{
	if(kindSte)
	{
		if(addSte)
			printf("%d와 %d의 합은 %d입니다. \n", n1, n2, n1+n2);
		if(minSte)
			printf("%d와 %d의 차는 %d입니다. \n", n1, n2, n1-n2);
	}
	else
	{
		if(addSte)
			printf("%d + %d = %d \n", n1, n2, n1+n2);
		if(minSte)
			printf("%d - %d = %d \n", n1, n2, n1-n2);
	}

}