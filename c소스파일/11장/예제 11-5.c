#include <stdio.h>

/* �ѳ��뱳�� ���̴� �� 915���Ͷ��ϴ�. */

int main(void)
{
	int cnt=0;
	int len=0;

	printf("���� ������ ��ӵǴ� ����! ����! ����! \n");
	printf("�ѳ��뱳�� ���̴� �� �����ϱ��? \n");

	while(1)  
	{
		cnt++; 
		printf("����? ");
		scanf("%d", &len);

		if(len==915)
			break;
		else if(len<915)
			printf("�׺��ٴ� ����. \n");
		else
			printf("�׺��� ª����. \n");

	}

	printf("�����Դϴ�. �� %dȸ�� �õ� ���� ���߼̽��ϴ�. \n", cnt);
	
	return 0;
}