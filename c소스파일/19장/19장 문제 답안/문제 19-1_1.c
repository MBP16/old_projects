#include <stdio.h>

int main(void)
{
	int A[2][2]={{2, 2},{2, 2}};
	int B[2][2]={{1, 0},{0, 1}};

	printf("%4d %4d \n", 
		A[0][0]*B[0][0]+A[0][1]*B[1][0],
		A[0][0]*B[0][1]+A[0][1]*B[1][1]
	);

	printf("%4d %4d \n", 
		A[1][0]*B[0][0]+A[1][1]*B[1][0],
		A[1][0]*B[0][1]+A[1][1]*B[1][1]
	);

	return 0;
}