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
	
	printf("년: %d \n", sptime->tm_year + 1900);
	printf("월: %d \n", sptime->tm_mon + 1);
	printf("일: %d \n", sptime->tm_mday);
	printf("시: %d \n", sptime->tm_hour);
	printf("분: %d \n", sptime->tm_min);
	printf("초: %d \n", sptime->tm_sec);
	
	TodayIs(sptime);
	IsSummerTime(sptime);
	printf("오늘은 올해의 %d번째 날이다! \n", sptime->tm_yday + 1);
	return 0;
}

void TodayIs(struct tm * today)
{
	switch(today->tm_wday)
	{
	case SUN:
		puts("일요일");	break;
	case MON:
		puts("월요일");	break;
	case TUE:
		puts("화요일");	break;
	case WED:
		puts("수요일");	break;
	case THU:
		puts("목요일");	break;
	case FRI:
		puts("금요일");	break;
	case SAT:
		puts("토요일");	break;
	}
}

void IsSummerTime(struct tm * today)
{
	if(today->tm_isdst>0)
		puts("써머타임 적용");
	else if(today->tm_isdst==0)
		puts("써머타임 미 적용");
	else
		puts("써머타임 정보 없음");
} 