#include <stdio.h>
#define NAME_LEN  30
#define PID_LEN   15

struct __person
{
	char name[NAME_LEN];  // �̸�
	char ID[PID_LEN];     // �ֹε�� ��ȣ
	unsigned int age;     // ����
};
typedef struct __person  person;

void ShowPersonData(person * ptr)
{
	printf("�̸�: %s \n", ptr->name);
	printf("�ֹε�� ��ȣ: %s \n", ptr->ID);
	printf("����: %u \n\n", ptr->age);
}

void SwapPersonData(person * p1, person * p2)
{
	person temp=*p1;
	*p1=*p2;
	*p2=temp;
}

int main(void)
{
	/* 1. �� ���� person ����ü ���� ����*/
	person man1;
	person man2;
	
	/* 2. �Է��� ���� �� ������ �ʱ�ȭ */
	printf("�̸�, �ֹι�ȣ, ���� �� �Է� 1: ");
	scanf("%s %s %d", man1.name, man1.ID, &(man1.age));

	printf("�̸�, �ֹι�ȣ, ���� �� �Է� 2: ");
	scanf("%s %s %d", man2.name, man2.ID, &(man2.age));

	/* 3. �� ������ �� ���� */
	SwapPersonData(&man1, &man2);

	/* 4. ����� ����Ǿ����� Ȯ�� */
	ShowPersonData(&man1);
	ShowPersonData(&man2);
	return 0;
}