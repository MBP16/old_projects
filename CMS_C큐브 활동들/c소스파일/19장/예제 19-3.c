#include <stdio.h>

int SeatAssign(int v, int h);
int seats[5][5];

int main(void)
{
	int vLine; // ���� ����
	int hLine; // ���� ����

	while(1)
	{
		printf("�Ҵ��� �¼��� ����, ���� ��ġ �Է�: ");
		scanf("%d %d", &vLine, &hLine);
		if(hLine<=0 || vLine<=0)
			break;

		if(SeatAssign(vLine, hLine)==-1)
			printf("�̹� �Ҵ�� �ڸ��Դϴ�. \n\n");
		else
			printf("�Ҵ��� �Ϸ�Ǿ����ϴ�. \n\n");

	}
	printf("����� �ּż� �����մϴ�. \n\n");

	return 0;
}

int SeatAssign(int v, int h)
{
	if(seats[v-1][h-1])  // �̹� �Ҵ�� �ڸ����
		return -1;

	seats[v-1][h-1]=1;
	return 1;
}