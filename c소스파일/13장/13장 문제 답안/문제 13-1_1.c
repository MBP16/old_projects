#include <stdio.h>

void SavingBox(int money);

int main(void)
{
	SavingBox(100);
	SavingBox(150);
	SavingBox(200);

	return 0;
}

void SavingBox(int money)
{
	static int accMoney;
	accMoney+=money;

	printf("누적 금액: %d \n", accMoney);
}

