#include <stdio.h>
#include <math.h>//#include 헤더 함수도 함수를 선언하는것 과 같음

//함수 : 어떤 일을 처리하는 논리적인 코드들의 집합
//함수사용 : 1.함수를 정의, 2.함수를 호출, 3.함수를 선언(옵션)
void funcA(); //3.함수선언부
//함수선언은 컴파일러에게 함수의 원형(형식)을 말한다.
//이를 생략하면 컴파일러는 모든 인자를 int로 간주한다.
void funcB(int salary);
int funcD(); //함수선언부 끼리는 순서는 중요하지 않다.
float funcE(int salTot, float rate);

int main()
{
	int salary = 3500000; //지역변수(자신이 선언된 함수에서만 사용)
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA(); //2.함수호출부(무인수)
	funcB(salary); //함수호출부(실인수)

	sudang = funcD(); //값을 받기 위해서는 대입문으로 받아라
	printf("main() 수당: %d\n", sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("tax : %f\n", tax);

	printf("실수령액 : %f \n",(salary+sudang) - tax);

	printf("10의 제곱근: %lf \n", sqrt(10.0));//선언이 안됨

	printf("main() end. \n");


	return 0;
}

float funcE(int salTot, float rate)
{
	//printf("funcE() %d, %f", salTot, rate);
	//printf("funcE(): 세금 : %f \n", salTot * rate);
	return salTot * rate;
}

//1.함수정의부
void funcA() //함수해더
{		//함수바디
	printf("funcA() start.\n");
	return; //부모함수로 즉시 복귀
	printf("funcA() end.\n");
	//funcA end() 생략
}		//함수바디

//실인수와 가인수는 개수와 자료형이 같아야 한다.
void funcB(int salary) //가인수
{
	printf("funcB() salary: %d.\n", salary);
	//부모함수에 있는 salary와는 다른 변수이다.
}

int funcD() //default는 int임.
{
	int over_time = 15;

	//printf("funcD() 수당 : %d \n", over_time * 37000);
	return over_time * 37000;
}