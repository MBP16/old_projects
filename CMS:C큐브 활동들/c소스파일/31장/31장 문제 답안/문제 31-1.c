#include <stdio.h>
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
	printf("이름: %s \n", ptr->name);
	printf("주민등록 번호: %s \n", ptr->ID);
	printf("나이: %u \n\n", ptr->age);
}

void SwapPersonData(person * p1, person * p2)
{
	person temp=*p1;
	*p1=*p2;
	*p2=temp;
}

int main(void)
{
	/* 1. 두 개의 person 구조체 변수 선언*/
	person man1;
	person man2;
	
	/* 2. 입력을 통한 두 변수의 초기화 */
	printf("이름, 주민번호, 나이 순 입력 1: ");
	scanf("%s %s %d", man1.name, man1.ID, &(man1.age));

	printf("이름, 주민번호, 나이 순 입력 2: ");
	scanf("%s %s %d", man2.name, man2.ID, &(man2.age));

	/* 3. 두 변수의 값 변경 */
	SwapPersonData(&man1, &man2);

	/* 4. 제대로 변경되었는지 확인 */
	ShowPersonData(&man1);
	ShowPersonData(&man2);
	return 0;
}