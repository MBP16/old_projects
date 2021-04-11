#include <stdio.h>

double DBArrAdder(const double arr[], const int len);

int main(void)
{
	double arr1[ ]={1.1, 2.2, 3.3};
	double arr2[ ]={1.2, 2.4, 3.6, 4.8};

	printf("arr1�� ��: %g \n", 
		DBArrAdder(arr1, sizeof(arr1)/sizeof(double)));

	printf("arr2�� ��: %g \n", 
		DBArrAdder(arr2, sizeof(arr2)/sizeof(double)));

	return 0;
}

double DBArrAdder(const double arr[], const int len)
{
	double sum=0;
	int i;

	for(i=0; i<len; i++)
		sum+=arr[i];
	
	return sum;
}
