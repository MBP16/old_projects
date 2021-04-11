#include <stdio.h>
#include <stdlib.h>

int BubbleACDSort(int n1, int n2);
int QuickACDSort(const void * p1, const void * p2);
void BubbleSort(int ary[], int len, int (*sortFunc)(int,int));

int bubbleCompCnt;
int quickCompCnt;

int main(void)
{
	int arr1[ ]={9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arr2[ ]={9, 8, 7, 6, 5, 4, 3, 2, 1};

	BubbleSort(
		arr1, sizeof(arr1)/sizeof(int), BubbleACDSort
	); 
	qsort(
		(void*)arr2, sizeof(arr2)/sizeof(int), sizeof(int), 
		QuickACDSort
	);

	printf("버블 정렬 비교 횟수: %d \n", bubbleCompCnt);
	printf("퀵 정렬 비교 횟수: %d \n", quickCompCnt);

	return 0;
}

int BubbleACDSort(int n1, int n2) // 버블 정렬용 비교함수
{
	bubbleCompCnt++;

	if(n1>n2)
		return 1;
	else
		return 0;
}

int QuickACDSort(const void * p1, const void * p2) // 퀵 정렬용 비교함수
{
	int n1= *((int *)p1);
	int n2= *((int *)p2);

	quickCompCnt++;

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
