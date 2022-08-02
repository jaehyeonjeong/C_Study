#include <stdio.h>

//pointer : 현재 실행중인 프로세스의 임의의 주소
int main()
{
	double d;	//변수(값을 저장)
	double* dp; //포인터 변수(메모리 주소를 저장)

	char* ptr;

	double* dp2;

	d = 1.5;
	printf("%lf, %p \n", d, &d);

	dp = &d;
	printf("%lf, %p \n", *dp, dp);
	//dp 주소를 찍음, *dp 포인터 연산자(포인터 변수에게만 쓸 수 있음)

	//*dp 내가 보관중인 주소를 참조한다(레퍼런스 작용), 간접 참조(*연산자 필수)

	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));

	ptr = &d; //다른 타입의 주소를 할당 받음

	printf("%p \n", ptr);
	printf("%lf \n", *ptr);

	return 0;
}