#include <stdio.h>

typedef struct box
{
	int data;
	struct box * boxRef;
} box;


int main(void)
{
	int i;
	box * bxPtr;

	box b1={1, NULL};
	box b2={11, NULL};

	b1.boxRef=&b2;
	b2.boxRef=&b1;

	bxPtr=&b1;

	for(i=1; i<=10; i++)
	{
		printf("%3d", bxPtr->data);
		(bxPtr->data)++;
		bxPtr=bxPtr->boxRef;
		if(!(i%2))
			printf("\t");
	}

	return 0;
}