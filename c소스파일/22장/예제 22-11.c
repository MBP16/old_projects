#include <stdio.h>

int main(void)
{
	char vStr[30]="String Variable";
	char * cStr="String Constant";

	vStr[0]='Q';
	printf("%s\n", vStr);

	*cStr='Q';
	printf("%s\n", cStr);

	return 0;
}