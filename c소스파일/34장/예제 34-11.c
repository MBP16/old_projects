#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t current;
	current=time(NULL);
	printf("���� �ð�: %s \n", ctime(&current));
	return 0;
}