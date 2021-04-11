#include <stdio.h>
#include <time.h>

#define RETURN_LARGE_NUM(A, B)  ((A)>(B) ? (A) : (B))

int ReturnLargeNum(int num1, int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}

int main(void)
{
	clock_t start, finish;
	int i;

	start=clock();
	for(i=0; i<99999999; i++)
		ReturnLargeNum(i, i+1);
	finish=clock();
	printf("일반 함수: 연산 위해 %f 초 소모 \n", 
		(double)(finish-start)/CLOCKS_PER_SEC);

	start=clock();
	for(i=0; i<99999999; i++)
		RETURN_LARGE_NUM(i, i+1);
	finish=clock();
	printf("매크로 함수: 연산 위해 %f 초 소모 \n", 
		(double)(finish-start)/CLOCKS_PER_SEC);

	return 0;
}

