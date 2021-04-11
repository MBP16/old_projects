#include <stdio.h>
int ACDSortOddLeft(int n1, int n2);
void BubbleSort(int ary[], int len, int (*sortFunc)(int,int));

int main(void)
{
	int arr[]={3, 2, 1, 4, 6, 8, 7, 5, 3, 4, 5};
	int i;

	BubbleSort(arr, sizeof(arr)/sizeof(int), ACDSortOddLeft);
	for(i=0; i<sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

int ACDSortOddLeft(int n1, int n2) 
{
	if((n1%2)==0 && (n2%2)!=0)
		return 1;

	if((n1%2)!=0 && (n2%2)==0)
		return 0;

	if(n1>n2)
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
