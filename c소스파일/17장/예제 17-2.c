#include <stdio.h>

int main(void)
{
	int arr[5];
	int i;

	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
	arr[4]=50;

	for(i=0; i<5; i++)
	{
		printf("%d��° ��ҿ� ����� ��: %d \n", i+1, arr[i]);
	}

	return 0;

}