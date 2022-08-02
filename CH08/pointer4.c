#include <stdio.h>

int* swap(int* x, int* y);

int main()
{
	int x = 100, y = 200;
	int* sal;

	printf("Before -> x : %d, y : %d \n", x, y);
	
	//swap(x, y); //Call by Value : 값이 자식함수에게 전달
	sal = swap(&x, &y); //Call by Reference : 주소가 자식함수에게 전달
	printf("After -> x : %d, y : %d \n", x, y);

	printf("salary : %d \n", *sal);


	return 0;
}

//swap(int x, int y)
int* swap(int* x, int* y)
{
	int tmp;
	static const int salary = 3700000; //정적변수
	//원래는 자식함수 내에서만 쓸 수 있음.
	tmp = *x;
	*x = *y;
	*y = tmp;
	return &salary;
}