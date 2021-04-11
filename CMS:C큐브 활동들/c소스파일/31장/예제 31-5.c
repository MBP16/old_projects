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

void ShowPersonData(person prsn)
{
	printf("이름: %s \n", prsn.name);
	printf("주민등록 번호: %s \n", prsn.ID);
	printf("나이: %u \n", prsn.age);
}

int main(void)
{
	person jongsoo;
	person copyman;

	strcpy(jongsoo.name, "한종수");
	strcpy(jongsoo.ID, "900218-1012589");
	jongsoo.age=20;

	copyman=jongsoo;
	ShowPersonData(copyman);

	return 0;
}
