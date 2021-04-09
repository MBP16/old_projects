#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t current;
	current=time(NULL);
	printf("현재 시간: %s \n", ctime(&current));
	return 0;
}