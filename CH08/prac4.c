#include <stdio.h>

int main()
{
	char ch, * cp;
	int num, * ip;
	float f_num, * fp;
	double d_num, * dp;

	ch = 'A'; num = 100; f_num = 5.6; d_num = 17.5;
	cp = &ch, ip = &num, fp = &f_num, dp = &d_num;

	printf("�������� �����ּ� :%p, %p, %p, %p \n", &ch, &num, &f_num, &d_num);
	printf("�������� ��: %5c, %5d, %10.2f, %10.2lf \n",
		ch, num, f_num, d_num);
	printf("������ ������ ����� �ּ�: %p, %p, %p, %p\n", cp, ip, fp, dp);
	printf("������ ������ ������ �� : %5c, %5d, %10.2f, %10.2lf \n\n",
		*cp, *ip, *fp, *dp);

	return 0;
}