
#include "file.h"   //사용자 정의 헤더파일 "":사용자 정의 디렉터리

int salary = 3500000; //전역변수

int main()
{
	myName();
	myAge();
	mySal();

	printf("실수령액 : %d \n", salary);
	return 0;
}

void myName()
{
	printf("성명: 정재현 \n");
}

void myAge()
{
	printf("나이: %d \n", AGE);
}