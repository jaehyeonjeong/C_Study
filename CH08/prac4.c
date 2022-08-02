#include <stdio.h>

int main()
{
	char ch, * cp;
	int num, * ip;
	float f_num, * fp;
	double d_num, * dp;

	ch = 'A'; num = 100; f_num = 5.6; d_num = 17.5;
	cp = &ch, ip = &num, fp = &f_num, dp = &d_num;

	printf("변수들의 시작주소 :%p, %p, %p, %p \n", &ch, &num, &f_num, &d_num);
	printf("변수들의 값: %5c, %5d, %10.2f, %10.2lf \n",
		ch, num, f_num, d_num);
	printf("포인터 변수에 저장된 주소: %p, %p, %p, %p\n", cp, ip, fp, dp);
	printf("포인터 변수가 참조한 값 : %5c, %5d, %10.2f, %10.2lf \n\n",
		*cp, *ip, *fp, *dp);

	return 0;
}