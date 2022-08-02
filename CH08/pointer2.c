#include <stdio.h>

int main()
{
	char ch, * cp;
	int num, * ip;
	float f_num, * fp;
	double d_num, * dp;

	printf("%d, %d, %d, %d\n", sizeof(ch),
		sizeof(num), sizeof(f_num), sizeof(d_num));
	printf("%d, %d, %d, %d\n", sizeof(cp),
		sizeof(ip), sizeof(fp), sizeof(dp));

	//1.포인터 변수에 참조할 변수의 주소를 할당
	cp = &ch;
	ip = &num;
	fp = &f_num;
	dp = &d_num;
	//2.포인터를 사용하여 변수에 값을 할당

	printf("%c, %d, %f, %lf \n", ch, num, f_num, d_num);

	printf("%c, %d, %f, %lf \n", *cp, *ip, *fp, *dp);

	return 0;
}