#include <stdio.h>


int salary = 3500000; //전역변수
int main()
{
	int age = 25; //지역변수

	printf("main() age: %d, %p, salary : %d, %p\n", 
		age, &age, salary, &salary);
	funcA(age);
	printf("main() age: %d, %p, salary : %d, %p\n",
		age, &age, salary, &salary);
	funcB();
	printf("main() age: %d, %p, salary : %d, %p\n",
		age, &age, salary, &salary);
	funcD();
	funcD();
	funcD();
	return 0;
}

funcD()
{
	int sum1 = 1; //지역변수
	static int sum2 = 1; //정적변수
	//이 둘은 저장소가 달라

	printf("sum1: %d, sum2: %d \n", sum1++, sum2++);
}

funcA(int age)
{
	printf("funcA() age: %d, %p, salary : %d, %p\n",
		age, &age, salary, &salary);
	age = 35;
	salary += 200000;
}

funcB()
{
	int age = 25;
	int salary = 1000;
	printf("funcB() age: %d, %p, salary : %d, %p\n",
		age, &age, salary, &salary);
	age = 40;
	salary += 2000;
}