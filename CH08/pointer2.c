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
	* cp = 'A', * ip = 100, * fp = 1.1, * dp = 5.3;

	printf("%c, %d, %f, %lf \n", ch, num, f_num, d_num);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);
	//printf("%c, %d, %f, %lf \n", *cp, *ip, *fp, *dp);
	//printf("%p, %p, %p, %p \n", &cp, &ip, &fp, &dp);
	ch++, num++, f_num++, d_num++; //���� ����
	cp++, ip++, fp++, dp++; //������ ����


	printf("%c, %d, %f, %lf \n", ch, num, f_num, d_num);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);

	return 0;
}