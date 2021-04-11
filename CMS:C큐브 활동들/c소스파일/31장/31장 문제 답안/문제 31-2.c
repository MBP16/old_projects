#include <stdio.h>
#define NAME_LEN		30
#define PID_LEN		15
#define EMP_NUM	     5

typedef struct __employee
{
	char name[NAME_LEN];  // 이름
	char ID[PID_LEN];     // 직원 고유번호
	unsigned int salary;     // 급여
} employee;

void ShowEmployeeData(employee * ptr)
{
	printf("이름: %s \n", ptr->name);
	printf("사번: %s \n", ptr->ID);
	printf("급여: %u \n\n", ptr->salary);
}

int main(void)
{
	employee empAry[EMP_NUM];
	double avrSry=0;  // 평균 급여
	int sumSry=0;
	int i;

	/* 1. 5명의 정보 입력 */
	for(i=0; i<EMP_NUM; i++)
	{
		printf("사번 이름 급여 순 입력: ");
		scanf("%s %s %u", 
			empAry[i].ID, empAry[i].name, &(empAry[i].salary));
		sumSry+=empAry[i].salary;
	}
	
	/* 2. 평균 급여 계산 및 출력 */
	avrSry=(double)sumSry/EMP_NUM;
	printf("평균 급여: %g \n", avrSry);

	/* 3. 평균 이상의 급여자 이름 및 ID 출력 */
	puts("평균 이상의 급여자 정보..............");
	for(i=0; i<EMP_NUM; i++)
		if((double)empAry[i].salary>=avrSry)
			ShowEmployeeData(&empAry[i]);

	return 0;
}