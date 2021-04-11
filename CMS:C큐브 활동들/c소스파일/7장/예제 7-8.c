#include <stdio.h>

/* 
  이 예제에서는 쉬운 단어의 선택을 위해서
  이자를 bonus로 표현하고, 원금은 money로 표현한다. 
*/

int CalBonus(int money, double rate, int day);

int main(void)
{
	int money = 2019;

	/* 이율은 하루에 0.1퍼센트 */
	printf("원금 %d에 대한 이자: %d \n", money, CalBonus(money, 0.1, 7));

	return 0;
}

/*
    함수이름: CalBonus
	함수기능: 원금에 대한 이자 계산
	전달인자
	    money - 원금
		rate - 하루 단위 이율
		day - 입금 기간

*/
int CalBonus(int money, double rate, int day)
{
	double bonus 
		= money * (rate/100.0) * day; 

	return (int)bonus;
}
