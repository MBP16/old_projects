#include <stdio.h>
#include <string.h>
#define NAME_LEN  30
#define PID_LEN   15

struct __person
{
	char name[NAME_LEN];  // 이름
	char ID[PID_LEN];     // 주민등록 번호
	unsigned int age;     // 나이
};
typedef struct __person  person;

void ShowPersonData(person * ptr)
{
	printf("이름: %s \n", (*ptr).name);
	printf("주민등록 번호: %s \n", (*ptr).ID);
	printf("나이: %u \n", ptr->age);
}

int main(void)
{
	person jongsoo;
	person copyman;
	person * personPtr;

	strcpy(jongsoo.name, "한종수");
	strcpy(jongsoo.ID, "900218-1012589");
	jongsoo.age=20;

	copyman=jongsoo;
	personPtr=&copyman;
	
	ShowPersonData(personPtr);

	return 0;
}
