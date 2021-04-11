#include <stdio.h>
void IsOdd(int arr[], const int len);
void ShowArray(const int arr[], const int len);

int main(void)
{
	int arr1[]={1, 2, 3, 4, 5};
	int arr2[]={1, 3, 5, 2, 4, 6};

	IsOdd(arr1, sizeof(arr1)/sizeof(int));
	IsOdd(arr2, sizeof(arr2)/sizeof(int));

	ShowArray(arr1, sizeof(arr1)/sizeof(int));
	ShowArray(arr2, sizeof(arr2)/sizeof(int));

	return 0;
}

void IsOdd(int arr[], const int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i]%2==1)
			arr[i]=1;
		else
			arr[i]=0;
	}
}
void ShowArray(const int arr[], const int len)
{
	int i;
	for(i=0; i<len; i++)
		printf("%3d", arr[i]);

	printf("\n");
}