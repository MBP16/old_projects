#include <stdio.h>

extern void AddCnt(void);
extern void MinCnt(void);
extern int GetCnt(void);

int main(void)
{
	AddCnt();
	AddCnt();
	printf("���� ������: %d \n", GetCnt());
	MinCnt();
	printf("���� ������: %d \n", GetCnt());
	return 0;
}