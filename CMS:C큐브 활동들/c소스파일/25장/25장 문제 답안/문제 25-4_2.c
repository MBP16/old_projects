#include <stdio.h>
#include <stdlib.h>

typedef char (*STR_ARR)[20];

int main(void)
{
	STR_ARR strAry=(STR_ARR)malloc(sizeof(char)*20*3);
	//char (*strAry)[20]=(STR_ARR)malloc(sizeof(char)*20*3);

	int i;
	for(i=0; i<3; i++)
	{
		printf("���ڿ� �Է�: ");
		scanf("%s", strAry[i]);
	}

	for(i=0; i<3; i++)
		printf("���ڿ� %d: %s \n", i+1, strAry[i]);

	free(strAry);
	return 0;
}