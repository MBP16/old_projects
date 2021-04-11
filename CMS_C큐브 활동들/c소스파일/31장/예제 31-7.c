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
	printf("�̸�: %s \n", (*ptr).name);
	printf("�ֹε�� ��ȣ: %s \n", (*ptr).ID);
	printf("����: %u \n\n", ptr->age);
}

int main(void)
{
	person jongsoo={"������", "900218-1012589", 20};
	person sungeun={"�̼���", "910218-1012589", 19};
	
	ShowPersonData(&jongsoo);
	ShowPersonData(&sungeun);
	return 0;
}
