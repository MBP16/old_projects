#include <stdio.h>
#include <string.h>
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
	printf("�̸�: %s \n", (*ptr).name);
	printf("�ֹε�� ��ȣ: %s \n", (*ptr).ID);
	printf("����: %u \n", ptr->age);
}

int main(void)
{
	person jongsoo;
	person copyman;
	person * personPtr;

	strcpy(jongsoo.name, "������");
	strcpy(jongsoo.ID, "900218-1012589");
	jongsoo.age=20;

	copyman=jongsoo;
	personPtr=&copyman;
	
	ShowPersonData(personPtr);

	return 0;
}
