#include <stdio.h>

int main()
{
	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30);	
	printf("%f \n", x / 30);
	printf("%f \n", x / y); //묵시적 형변환
	printf("%f \n", (float)x / 30); //명시적 형변환 (float)은 잠깐 바뀜
	//cast연산자(형변환연산자)
	printf("%f \n", x / 30);

	typedef long long int lo_int;

	long long int n1 = 2700000000;
	printf("%lld \n", n1);

	lo_int n2 = 2800000000;
	printf("%lld \n", n2);

	signed char num = -98;
	printf("%c", num);
	return 0;
}