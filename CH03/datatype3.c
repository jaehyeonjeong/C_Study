#include <stdio.h>

int main()
{
	short int n1;  //%hd//(signed)�� ����Ʈ�� �Ǿ�����.
	int n2;        //%d
	long int n3;   //%ld
	long long int n4; //%lld

	printf("%d, %d, %d, %d\n"
		,sizeof(n1), sizeof(n2), sizeof(n3), sizeof(n4));

	signed char c1 = 'A';
	unsigned char c2 = 97;

	printf("%d, %d \n", sizeof(c1), sizeof(c2));

	float f1 = 123456789123456789;
	double d1 = 123456789123456789;

	printf("%f\n%f", f1, d1);
	return 0;
}