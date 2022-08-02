#include <stdio.h>

int* swap(int* x, int* y);

int main()
{
	int x = 100, y = 200;
	int* sal;

	printf("Before -> x : %d, y : %d \n", x, y);
	
	//swap(x, y); //Call by Value : ���� �ڽ��Լ����� ����
	sal = swap(&x, &y); //Call by Reference : �ּҰ� �ڽ��Լ����� ����
	printf("After -> x : %d, y : %d \n", x, y);

	printf("salary : %d \n", *sal);


	return 0;
}

//swap(int x, int y)
int* swap(int* x, int* y)
{
	int tmp;
	static const int salary = 3700000; //��������
	//������ �ڽ��Լ� �������� �� �� ����.
	tmp = *x;
	*x = *y;
	*y = tmp;
	return &salary;
}