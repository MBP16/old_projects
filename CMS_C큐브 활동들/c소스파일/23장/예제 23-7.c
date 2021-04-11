#include <stdio.h>

int main(void)
{
	char* stArr[3]={"Hello", "Business", "Pet"};

	int i;
	for(i=0; i<3; i++)
		printf("¹®ÀÚ¿­ %d: %s \n", i+1, stArr[i]);

	return 0;
}