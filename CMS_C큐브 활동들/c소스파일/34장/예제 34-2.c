#include <stdio.h>

void ShowHi(int cnt)
{
	puts("Hi~ ");
	ShowHi(cnt--);
	if(cnt==1)
		return;
}

int main(void)
{
	ShowHi(3);
	return 0;
}