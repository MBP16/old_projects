#include <stdio.h>

void CopyArray(const int * const src, int * const dest, const int len);
void ShowArrElem(const int * const ary, const int len);

int main(void)
{
	int arr1[5]={1, 2, 3, 4, 5};
	int arr2[5];

	CopyArray(arr1, arr2, 5);
	ShowArrElem(arr2, 5);

	return 0;
}

void CopyArray(const int * const src, int * const dest, const int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		src[i]=dest[i];
	}
}

void ShowArrElem(const int * const ary, const int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("%d", ary[i]);
		len=i;
	}

	printf("\n");
}
