#include <stdio.h>

//pointer : ���� �������� ���μ����� ������ �ּ�
int main()
{
	double d;	//����(���� ����)
	double* dp; //������ ����(�޸� �ּҸ� ����)

	char* ptr;

	double* dp2;

	d = 1.5;
	printf("%lf, %p \n", d, &d);

	dp = &d;
	printf("%lf, %p \n", *dp, dp);
	//dp �ּҸ� ����, *dp ������ ������(������ �������Ը� �� �� ����)

	//*dp ���� �������� �ּҸ� �����Ѵ�(���۷��� �ۿ�), ���� ����(*������ �ʼ�)

	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));

	ptr = &d; //�ٸ� Ÿ���� �ּҸ� �Ҵ� ����

	printf("%p \n", ptr);
	printf("%lf \n", *ptr);

	return 0;
}