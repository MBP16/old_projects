#include <stdio.h>

int main(void)
{
	int arr[]={1, 2, 3, 4, 5};
	int * p=&arr[2];

	printf("Çö À§Ä¡: %d \n\n", *p);

	printf("ÇÑ Ä­ ¾Õ: %d \n", *(p+1));
	printf("µÎ Ä­ ¾Õ: %d \n\n", *(p+2));

	printf("ÇÑ Ä­ µÚ: %d \n", *(p-1));
	printf("µÎ Ä­ µÚ: %d \n\n", *(p-2));

	return 0;
}