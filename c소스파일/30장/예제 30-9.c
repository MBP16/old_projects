#include <stdio.h>

#define  TIME
#define  COUNT        9
#define  HIT_NUM      5

int main(void)
{

#ifdef   TIME 
#if  COUNT!=7 && HIT_NUM==5

	puts("모두 만족되었군!");

#endif
#endif

	return 0;
}