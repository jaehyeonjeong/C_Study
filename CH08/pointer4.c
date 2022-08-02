#include <stdio.h>

int main()
{
	int x = 100, y = 200;

	printf("Before -> x : %d, y : %d \n", x, y);
	
	//swap(x, y); //Call by Value : ���� �ڽ��Լ����� ����
	swap(&x, &y); //Call by Reference : �ּҰ� �ڽ��Լ����� ����
	printf("After -> x : %d, y : %d \n", x, y);


	return 0;
}

//swap(int x, int y)
swap(int* x, int* y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
	return;
}