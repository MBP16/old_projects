#include <stdio.h>

int main(void)
{
	double accArr[5];
	double rateOfInterest;
	int i;

	for(i=0; i<5; i++)
	{
		printf("�ܰ� �Է�: ");
		scanf("%lf", &accArr[i]);
	}

	printf("������ �Է�: ");
	scanf("%lf", &rateOfInterest);

	for(i=0; i<5; i++)
		accArr[i]*=(1+rateOfInterest/100.0);

	printf("���ڰ� �ݿ��� �ܰ� ��ȸ \n");
	for(i=0; i<5; i++)
		printf("���� %d: %g \n", i+1, accArr[i]);

	return 0;
}