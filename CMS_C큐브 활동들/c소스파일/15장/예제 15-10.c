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
	SetKindSte(TRUE);      // ģ�� ��� ��� ����
	SetAddOpSte(TRUE);     // ���� ��� ����
	SetMinOpSte(TRUE);     // ���� ��� ����

	printf("1�� ���........ \n");
	ShowOperationResult(5, 2);
	printf("\n");

	SetKindSte(FALSE);       // ģ�� ��� ��� ����
	SetAddOpSte(FALSE);      // ���� ��� ����
	
	printf("2�� ���........ \n");
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
			printf("%d�� %d�� ���� %d�Դϴ�. \n", n1, n2, n1+n2);
		if(minSte)
			printf("%d�� %d�� ���� %d�Դϴ�. \n", n1, n2, n1-n2);
	}
	else
	{
		if(addSte)
			printf("%d + %d = %d \n", n1, n2, n1+n2);
		if(minSte)
			printf("%d - %d = %d \n", n1, n2, n1-n2);
	}

}