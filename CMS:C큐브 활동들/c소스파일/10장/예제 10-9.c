#include <stdio.h>

int main(void)
{
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	if(num<0)
		goto AAA;
	else if(num==0)
		goto BBB;
	else
		goto CCC;


AAA:
	printf("������ �Է��ϼ̽��ϴ�. \n");
	goto END;

BBB:
	printf("0�� �Է��ϼ̽��ϴ�. \n");
	goto END;

CCC:
	printf("����� �Է��ϼ̽��ϴ�. \n");

END:
	printf("���α׷��� �����մϴ�. \n");

	return 0;
}