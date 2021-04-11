#include <stdio.h>

void CopyArray(int * src, int * dest, int len);
void ShowArrElem(int * ary, int len);

int main(void)
{
	int arr1[5]={1, 2, 3, 4, 5};
	int arr2[5];

	CopyArray(arr1, arr2, 5);
	ShowArrElem(arr2, 5);

	return 0;
}

void CopyArray(int * src, int * dest, int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		src[i]=dest[i];
	}
}

void ShowArrElem(int * ary, int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("%d", ary[i]);
		len=i;
	}

	printf("\n");
}
