#include <stdio.h>
#define PI 3.141592
//키보드로 부터 반지름을 입력받아.
//원의 넓이, 원의 둘레를 구하여 출력하시오.

/*
실행결과
반지름 ? 7
원의넓이: ???
원의둘레: ???
*/
double Area(int radius);
double Cir(int radius);

int main()
{
	//1.메모리 할당(변수 선언)
	int radius;
	double area, cir;
	//float PI = 3.141592;
	//2.데이터 입력
	printf("반지름 ? ");
	scanf("%d", &radius);
	

	//3.처리(넓이 둘레계산)
	area = Area(radius); //radius * radius * PI
	cir = Cir(radius); // radius * 2 * PI

	//4.출력
	printf("원의넓이 : %lf\n", area);
	printf("원의둘레 : %lf\n", cir);

	return 0;
}

double Area(int radius)
{
	return radius * radius * PI;
}

double Cir(int radius)
{
	return radius * 2 * PI;
}