#include <stdio.h>

int main(void)
{
	char str1[ ]="ORANGE";
	char str2[ ]="BANANA";

	int i;
	char ch;

	printf("Before! \n");
	printf("str1: %s \n", str1);
	printf("str2: %s \n\n", str2);

	for(i=0; i<6; i++)
	{
		ch=str1[i];
		str1[i]=str2[i];
		str2[i]=ch;
	}

	printf("After! \n");
	printf("str1: %s \n", str1);
	printf("str2: %s \n\n", str2);

	return 0;
}