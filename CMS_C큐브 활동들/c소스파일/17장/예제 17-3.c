#include <stdio.h>

int main(void)
{
	int i;
	int arr1[5]={1, 2, 3, 4, 5};
	int arr2[ ]={1, 2, 3, 4};
	int arr3[5]={1, 2, 3};

	int lenOfArr1=sizeof(arr1)/sizeof(int);
	int lenOfArr2=sizeof(arr2)/sizeof(int);
	int lenOfArr3=sizeof(arr3)/sizeof(int);

	printf("arr1[5]={1, 2, 3, 4, 5}의 초기화 결과 \n");
	for(i=0; i<lenOfArr1; i++)
	{
		printf("%d번째 요소에 저장된 값: %d \n", i+1, arr1[i]);
	}
	printf("\n");

	printf("arr2[ ]={1, 2, 3, 4}의 초기화 결과 \n");
	for(i=0; i<lenOfArr2; i++)
	{
		printf("%d번째 요소에 저장된 값: %d \n", i+1, arr2[i]);
	}
	printf("\n");

	printf("arr3[5]={1, 2, 3}의 초기화 결과 \n");
	for(i=0; i<lenOfArr3; i++)
	{
		printf("%d번째 요소에 저장된 값: %d \n", i+1, arr3[i]);
	}
	printf("\n");

	return 0;
}