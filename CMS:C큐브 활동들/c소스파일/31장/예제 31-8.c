#include <stdio.h>
#define ARRY_LEN 3
#define NAME_LEN  30
#define PID_LEN   15

typedef struct __person
{
	char name[NAME_LEN];  
	char ID[PID_LEN];     
	unsigned int age;     
} person;

void ShowPersonData(person * ptr);

int main(void)
{
	int i;
	person personArr[ARRY_LEN]={
		{"������", "900218-1012589", 20}, 
		{"�̼���", "910218-1012589", 19},
		{"������", "930218-1012589", 17}
	};

	for(i=0; i<ARRY_LEN ; i++)
		ShowPersonData(&personArr[i]);

	return 0;
}

void ShowPersonData(person * ptr)
{
	printf("�̸�: %s \n", (*ptr).name);
	printf("�ֹε�� ��ȣ: %s \n", (*ptr).ID);
	printf("����: %u \n\n", ptr->age);
}