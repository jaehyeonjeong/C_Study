#include <stdio.h>

int main()
{
	double dNum, * dp;//������ ������ ����

	dNum = 7.5;
	printf("dNum: %lf, &dNum: %p\n\n\"", dNum, &dNum);

	dp = &dNum; //������ ������ ������ �ּ� �Ҵ�
	printf("*dp: %lf, dp: %p \n", *dp, dp);

	//*dp = ���� ������ ������ ���
	//dp = �����Ͱ� �����ϰ� �ִ� �ּ� ���
	return 0;
}