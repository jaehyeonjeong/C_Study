#include <stdio.h>

#define ArrSz 100 //�迭ũ��� ��ũ�� ����� �ְ�!!

//�迭(Array): �ϳ��� �̸����� ���� �ڷ����� ���� �����͵��� ����
//�� �������� �޸� ����

//int num[5]; :�迭����
//

int main()
{
	int num[ArrSz + 4] = { 0 }; //�迭����
	int count = 0;
	int i;

	printf("%d, %d \n", sizeof(num), sizeof(num[0])); //num:20
	//[]: ÷��(subscript)

	printf("%d, %p, %p \n\n", num[0], &num[0], num);//�迭 �������� �����Ͱ� �ƴ�
	//÷�ڰ� ���� �迭������ �� �迭�� �Ҵ�� �޸��� �����ּҸ� ����
	//������ ����̴�.

	for (i = 0; i < ArrSz; i++)
	{
		printf("%d input ?(�Է����� : 0) ", i + 1);
		scanf("%d%*c", &num[i]);
		if (num[i] == 0)
			break;
		num[ArrSz + 0] += num[i];
	}

	count = i; //i������ ī��Ʈ ������ count = i;�� �ϴ°� �´�.

	num[ArrSz + 1] = num[ArrSz + 0] / count;


	num[ArrSz + 2] = num[ArrSz + 3] = num[0];

	for (i = 0; i < count; i++)
	{
		if (num[ArrSz + 2] < num[i]) //�ִ� ��
			num[ArrSz + 2] = num[i];

		if (num[ArrSz + 3] > num[i]) //�ּ� ��
			num[ArrSz + 3] = num[i];
	}
	printf("\n");

	for (i = 0; i < count; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	printf("��: %d, ���: %lf\n", num[ArrSz + 0], (float)num[ArrSz + 1]);
	printf("�ִ밪: %d, �ּҰ�: %d\n", num[ArrSz + 2], num[ArrSz + 3]);
	int tmp;
	for (i = 0; i < (count - 1); i++)
	{
		for (int j = 0; j < ((count - 1)) - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	printf("Sort result : ");
	for (i = 0; i < count; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	return 0;
}