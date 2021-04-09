#include <stdio.h>

int main(void)
{
	char str1[]="Hello";
	char str2[]="Business";
	char str3[]="Pet";

	char* stArr[3]={str1, str2, str3};

	int i;
	for(i=0; i<3; i++)
		printf("¹®ÀÚ¿­ %d: %s \n", i+1, stArr[i]);

	return 0;
}