#include <stdio.h>

int main()
{
	char ch, * cp;
	int num, * ip;
	float f_num, * fp;
	double d_num, * dp;

	printf("������ ũ�� : %3d %3d %3d %3d\n", sizeof(ch),
		sizeof(num), sizeof(f_num), sizeof(d_num));

	printf("������ ������ ũ�� : %3d %3d %3d %3d\n", sizeof(cp),
		sizeof(ip), sizeof(fp), sizeof(dp));

	d_num = 17.5;
	cp = &d_num; //�ڷ����� �ٸ������� �ּ� ����
	printf("\ncp �� ������ �� : %lf \n\n", *cp);

	return 0;
}