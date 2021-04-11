#include <stdio.h>

int main(void)
{
	int n1 = 100;
	int n2 = 200;
	
	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int** dptr = &ptr1;

	/*** 추가 된 코드 ***/
	int* temp;

	temp=*dptr;
	*dptr=ptr2;
	ptr2=temp;
	
	dptr=&ptr2;
	/********************/
	
	printf(" *ptr1 = %d \n", *ptr1);
	printf(" *ptr2 = %d \n", *ptr2);
	printf("**dptr = %d \n\n", **dptr);
	return 0;
}
