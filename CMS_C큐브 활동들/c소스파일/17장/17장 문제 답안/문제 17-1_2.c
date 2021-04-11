#include <stdio.h>

int main(void)
{
	double accArr[5];
	double rateOfInterest;
	int i;

	for(i=0; i<5; i++)
	{
		printf("잔고 입력: ");
		scanf("%lf", &accArr[i]);
	}

	printf("이자율 입력: ");
	scanf("%lf", &rateOfInterest);

	for(i=0; i<5; i++)
		accArr[i]*=(1+rateOfInterest/100.0);

	printf("이자가 반영된 잔고 조회 \n");
	for(i=0; i<5; i++)
		printf("계좌 %d: %g \n", i+1, accArr[i]);

	return 0;
}