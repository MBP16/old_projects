#include <stdio.h>

/* 
  �� ���������� ���� �ܾ��� ������ ���ؼ�
  ���ڸ� bonus�� ǥ���ϰ�, ������ money�� ǥ���Ѵ�. 
*/

int CalBonus(int money, double rate, int day);

int main(void)
{
	int money = 2019;

	/* ������ �Ϸ翡 0.1�ۼ�Ʈ */
	printf("���� %d�� ���� ����: %d \n", money, CalBonus(money, 0.1, 7));

	return 0;
}

/*
    �Լ��̸�: CalBonus
	�Լ����: ���ݿ� ���� ���� ���
	��������
	    money - ����
		rate - �Ϸ� ���� ����
		day - �Ա� �Ⱓ

*/
int CalBonus(int money, double rate, int day)
{
	double bonus 
		= money * (rate/100.0) * day; 

	return (int)bonus;
}
