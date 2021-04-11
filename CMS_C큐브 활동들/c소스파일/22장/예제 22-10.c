#include <stdio.h>

int main(void)
{
	char * str1="Computer Systems";
	char * str2="Operating Systems";

	char * fmtStr="%s\n%s\n";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf(fmtStr, str1, str2);

	return 0;
}