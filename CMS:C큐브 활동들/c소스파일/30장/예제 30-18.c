#include <stdio.h>

int main(void)
{  
#undef  DATE
#define DATE   "11��: 24��"
	printf("������ %s \n", DATE);

#undef  DATE
#define DATE   "11��: 25��"
	printf("������ %s \n", DATE);

#undef  DATE
#define DATE   "11��: 26��"
	printf("�𷹴� %s \n", DATE);

	return 0;
}