#include <stdio.h>
#include <string.h>

char* AddStringOne(char des[], char src[], int desLen);

int main(void)
{
	char str1[20]="Your name is ";
	char str2[20];
	char * ret;

	while(1)
	{
		printf("�̸��� �Է��ϼ���: ");
		gets(str2);
		ret=AddStringOne(str1, str2, sizeof(str1)/sizeof(char));
		if(ret!=NULL)
			break;
		else
			puts("�ʹ� ����. ���� ª�� �Է��ϼ���.");

	}
	puts(str1);
	return 0;
}

char* AddStringOne(char des[], char src[], int desLen)
{
	int dStrLen=strlen(des);
	int sStrLen=strlen(src);
	int maxAddLen=desLen-dStrLen;

	if(maxAddLen>sStrLen)      // ������ �����ϴٸ�
		return strcat(des, src);
	else
		return NULL;
}