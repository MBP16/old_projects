#include <stdio.h>

int main(void)
{
	int arr[]={1, 2, 3, 4, 5};
	int * p=arr;    // int * p=&arr[0];

	printf("1��° ���: %d \n", *(p++));
	printf("2��° ���: %d \n", *(p++));
	printf("3��° ���: %d \n", *(p++));
	printf("4��° ���: %d \n", *(p++));
	printf("5��° ���: %d \n", *(p));

	return 0;
}