#include <stdio.h>

void ShowHi(int cnt)
{
	puts("Hi~ ");
	if(cnt==1)
		return;
	ShowHi(--cnt);
}

int main(void)
{
	ShowHi(3);
	return 0;
}