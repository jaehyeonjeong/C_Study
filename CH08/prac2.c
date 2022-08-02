#include <stdio.h>

int main()
{
	double dNum, * dp;//변수와 포인터 선언

	dNum = 7.5;
	printf("dNum: %lf, &dNum: %p\n\n\"", dNum, &dNum);

	dp = &dNum; //포인터 변수에 변수의 주소 할당
	printf("*dp: %lf, dp: %p \n", *dp, dp);

	//*dp = 간접 참조한 데이터 출력
	//dp = 포인터가 보관하고 있는 주소 출력
	return 0;
}