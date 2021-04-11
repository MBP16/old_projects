#include <stdio.h>

int main(void)
{
	int arr[]={1, 2, 3, 4, 5};
	int * p=arr;    // int * p=&arr[0];

	printf("1번째 요소: %d \n", *(p++));
	printf("2번째 요소: %d \n", *(p++));
	printf("3번째 요소: %d \n", *(p++));
	printf("4번째 요소: %d \n", *(p++));
	printf("5번째 요소: %d \n", *(p));

	return 0;
}