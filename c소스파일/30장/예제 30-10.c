#include <stdio.h>

#define  TIME
#define  COUNT        9
#define  HIT_NUM      5

int main(void)
{

#if defined(TIME) && COUNT!=7 && HIT_NUM==5

	puts("모두 만족되었군!");

#endif

	return 0;
}