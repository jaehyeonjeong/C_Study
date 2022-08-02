#include <stdio.h>

int main()
{
	char ch, * cp;
	int num, * ip;
	float f_num, * fp;
	double d_num, * dp;

	printf("변수의 크기 : %3d %3d %3d %3d\n", sizeof(ch),
		sizeof(num), sizeof(f_num), sizeof(d_num));

	printf("포인터 변수의 크기 : %3d %3d %3d %3d\n", sizeof(cp),
		sizeof(ip), sizeof(fp), sizeof(dp));

	d_num = 17.5;
	cp = &d_num; //자료형이 다른변수의 주소 대입
	printf("\ncp 가 참조한 값 : %lf \n\n", *cp);

	return 0;
}