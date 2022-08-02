#include <stdio.h>
#define Arr_SZ 5
int main()
{
	int i;

	//1.배열은 상수로 선언한다.
	int a1[5]; //정수형 상수 가능
	int a2[Arr_SZ]; //매크로 상수에서 쓸 수 있음.
	int n = 5;
	//int a3[n]; //크기를 알 수 없어서 할당 불가
	const int m = 5;
	//int a4[m]; //const도 마찬가지

	//2.배열복사는 배열변수명으로 복사할 수 없다.
	int x1[5] = { 1,2,3,4,5 };
	int x2[5];

	//x2 = x1;//포인터 상수 끼리는 바꿀 수 없다. 단, 원소 대 원소로 대입가능
	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i];
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d, ", x2[i]);
	}
	printf("\n");

	//3.배열초기화
	int x3[5] = { 100, 200 }; //초기화 안한 나머지는 0을 보장한다.

	int x[20][50] = { 0 };
	//int x3[5] = { 100, 200, 300, 400, 500 };
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", x3[i]);
	}
	printf("\n");

	//4.언사이즈드 베열(배열이 선언과 동시에 초기화 될 때 가능)
	int x4[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900 };
	int x5[][3] = { 1,2,3,4,5,6 };

	printf("x4 sizeof: %d \n", sizeof(x4));
	printf("x5 sizeof: %d \n", sizeof(x5));

	for (i = 0; i < sizeof(x4) / sizeof(x4[0]); i++)
		printf("%d, ", x4[i]);
	printf("\n");


	return 0;
}