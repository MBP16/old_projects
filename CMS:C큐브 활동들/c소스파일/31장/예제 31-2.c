#include <stdio.h>

/*** point��� �̸��� �ڷ��� ���� ***/
struct point
{
	double xPos;
	double yPos;
};

int main(void)
{
	/** ������ ���� **/
	double num;
	struct point pnt;

	/** ������ �ʱ�ȭ **/
	num=1.2;
	pnt.xPos=2.2;
	pnt.yPos=3.4;

	/** �ʱ�ȭ�� ���� ��� **/
	printf("num: %g \n", num);
	printf("pnt.xPos: %g \n", pnt.xPos);
	printf("pnt.yPos: %g \n\n", pnt.yPos);

	/** ������ ũ�� ��� **/
	printf("num�� ũ��: %d����Ʈ \n", sizeof(num));
	printf("pnt�� ũ��: %d����Ʈ \n", sizeof(pnt));

	return 0;
}
