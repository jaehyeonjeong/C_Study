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

	//1.������ ������ ������ ������ �ּҸ� �Ҵ�
	cp = &ch;
	ip = &num;
	fp = &f_num;
	dp = &d_num;
	//2.�����͸� ����Ͽ� ������ ���� �Ҵ�

	printf("%c, %d, %f, %lf \n", ch, num, f_num, d_num);

	printf("%c, %d, %f, %lf \n", *cp, *ip, *fp, *dp);

	return 0;
}