#include <stdio.h>
#define NAME_LEN		30
#define PID_LEN		15
#define EMP_NUM	     5

typedef struct __employee
{
	char name[NAME_LEN];  // �̸�
	char ID[PID_LEN];     // ���� ������ȣ
	unsigned int salary;     // �޿�
} employee;

void ShowEmployeeData(employee * ptr)
{
	printf("�̸�: %s \n", ptr->name);
	printf("���: %s \n", ptr->ID);
	printf("�޿�: %u \n\n", ptr->salary);
}

int main(void)
{
	employee empAry[EMP_NUM];
	double avrSry=0;  // ��� �޿�
	int sumSry=0;
	int i;

	/* 1. 5���� ���� �Է� */
	for(i=0; i<EMP_NUM; i++)
	{
		printf("��� �̸� �޿� �� �Է�: ");
		scanf("%s %s %u", 
			empAry[i].ID, empAry[i].name, &(empAry[i].salary));
		sumSry+=empAry[i].salary;
	}
	
	/* 2. ��� �޿� ��� �� ��� */
	avrSry=(double)sumSry/EMP_NUM;
	printf("��� �޿�: %g \n", avrSry);

	/* 3. ��� �̻��� �޿��� �̸� �� ID ��� */
	puts("��� �̻��� �޿��� ����..............");
	for(i=0; i<EMP_NUM; i++)
		if((double)empAry[i].salary>=avrSry)
			ShowEmployeeData(&empAry[i]);

	return 0;
}