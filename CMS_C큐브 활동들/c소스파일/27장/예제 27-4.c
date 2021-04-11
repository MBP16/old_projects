#include <stdio.h>

void AddProc(void);
void MinusProc(void);
void (* RetFuncPtr(int sel))(void);

int main(void)
{
	void (*fctPtr)(void);

	fctPtr=RetFuncPtr(1);
	fctPtr();

	fctPtr=RetFuncPtr(2);
	fctPtr();

	return 0;
}

void (* RetFuncPtr(int sel))(void)
{
	if(sel==1)
		return AddProc;
	else
		return MinusProc;
}

void AddProc(void)
{
	int n1, n2;
	printf("���� ���� �� ���� ���� �Է�: ");
	scanf("%d %d", &n1, &n2);
	printf("���� ���: %d \n\n", n1+n2);
}

void MinusProc(void)
{
	int n1, n2;
	printf("���� ���� �� ���� ���� �Է�: ");
	scanf("%d %d", &n1, &n2);
	printf("���� ���: %d \n\n", n1-n2);
}
