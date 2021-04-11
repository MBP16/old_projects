#include <stdio.h>

int main(void)
{
	char* sPtrArr[3]={"AAA", "BBB", "CCC"};
	char** dptr=sPtrArr;

	printf("%c \n", **dptr);

	return 0;
}
