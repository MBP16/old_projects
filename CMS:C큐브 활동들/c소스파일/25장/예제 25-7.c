#include <stdio.h>
#include <stdlib.h>

char * ReadString(void);
int * ReadInteger(void);

int main(void)
{
	char * strPtr;
	int * numPtr;

	strPtr=ReadString();
	numPtr=ReadInteger();

	if(strPtr!=NULL)
		printf("�о� ���� ���ڿ�: %s \n", strPtr);

	if(numPtr!=NULL)
		printf("�о� ���� ����: %d \n", *numPtr);

	free(strPtr);
	strPtr=NULL;

	free(numPtr);
	numPtr=NULL;

	return 0;
}

char * ReadString(void)
{
	char * sPtr=(char*)malloc(sizeof(char)*20);
	if(sPtr==NULL)
		return NULL;

	printf("���ڿ� �Է�: ");
	scanf("%s", sPtr);
	return sPtr;
}

int * ReadInteger(void)
{
	int * iPtr=(int*)malloc(sizeof(int));
	if(iPtr==NULL)
		return NULL;

	printf("���� �Է�: ");
	scanf("%d", iPtr);
	return iPtr;
}
