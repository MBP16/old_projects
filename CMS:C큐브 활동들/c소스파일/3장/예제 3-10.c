
//파일이름: printfTest.c
//작성자: 홍길동
//작성일: 2012년 9월 25일
//작성이유: printf 함수의 기능 테스트

#include <stdio.h>
	
int main(void)
{
	int val=0;   //변수 선언 및 초기화

	val=1+2;   //덧셈 연산 후에 대입연산
	printf("1+2=%d \n", val);

	val=2+3;
	printf("2+3=%d \n", val);   //문자열 출력
	
	return 0;
}