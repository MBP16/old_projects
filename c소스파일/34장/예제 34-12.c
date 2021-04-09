#include <stdio.h>
#include <time.h>

enum {SUN=0, MON, TUE, WED, THU, FRI, SAT};
void TodayIs(struct tm * today);
void IsSummerTime(struct tm * today);

int main(void)
{
	time_t current;
	struct tm * sptime;

	current=time(NULL);
	sptime=localtime(&current);
	
	printf("��: %d \n", sptime->tm_year + 1900);
	printf("��: %d \n", sptime->tm_mon + 1);
	printf("��: %d \n", sptime->tm_mday);
	printf("��: %d \n", sptime->tm_hour);
	printf("��: %d \n", sptime->tm_min);
	printf("��: %d \n", sptime->tm_sec);
	
	TodayIs(sptime);
	IsSummerTime(sptime);
	printf("������ ������ %d��° ���̴�! \n", sptime->tm_yday + 1);
	return 0;
}

void TodayIs(struct tm * today)
{
	switch(today->tm_wday)
	{
	case SUN:
		puts("�Ͽ���");	break;
	case MON:
		puts("������");	break;
	case TUE:
		puts("ȭ����");	break;
	case WED:
		puts("������");	break;
	case THU:
		puts("�����");	break;
	case FRI:
		puts("�ݿ���");	break;
	case SAT:
		puts("�����");	break;
	}
}

void IsSummerTime(struct tm * today)
{
	if(today->tm_isdst>0)
		puts("���Ÿ�� ����");
	else if(today->tm_isdst==0)
		puts("���Ÿ�� �� ����");
	else
		puts("���Ÿ�� ���� ����");
} 