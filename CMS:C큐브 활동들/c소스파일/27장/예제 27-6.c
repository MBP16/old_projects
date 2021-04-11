#include <stdio.h>
int ACDSort(int n1, int n2);
int DSDSort(int n1, int n2);
void BubbleSort(int ary[], int len, int (*sortFunc)(int,int));

int main(void)
{
	int arr[4]={3, 2, 1, 4};
	int i;

	BubbleSort(arr, sizeof(arr)/sizeof(int), ACDSort);
	for(i=0; i<4; i++)
		printf("%d ", arr[i]);

	printf("\n");

	BubbleSort(arr, sizeof(arr)/sizeof(int), DSDSort);
	for(i=0; i<4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

int ACDSort(int n1, int n2) // 오름차순 정렬의 KEY
{
	if(n1>n2)
		return 1;
	else
		return 0;
}

int DSDSort(int n1, int n2) // 내림차순 정렬의 KEY
{
	if(n1<n2)
		return 1;
	else
		return 0;
}

void BubbleSort(int ary[], int len, int (*sortFunc)(int,int))
{
	int i, j;
	int temp;

	for(i=0; i<len-1 ;i++)
	{
		for(j=0; j<(len-i)-1; j++)
		{
			if(sortFunc(ary[j], ary[j+1]))
			{
				temp=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=temp;
			}
		}
	}
}
