#include <stdio.h>

//�迭(Array): �ϳ��� �̸����� ���� �ڷ����� ���� �����͵��� ����
//�� �������� �޸� ����

//int num[5]; :�迭����
//

int main()
{
	int num[5] = { 300, 20, 70, -40, 1500 }; //�迭����
	int i, sum = 0;
	float avg;
	int max, min;

	printf("%d, %d \n", sizeof(num), sizeof(num[0])); //num:20
	//[]: ÷��(subscript)

	printf("%d, %p, %p \n\n", num[0], &num[0], num);//�迭 �������� �����Ͱ� �ƴ�
	//÷�ڰ� ���� �迭������ �� �迭�� �Ҵ�� �޸��� �����ּҸ� ����
	//������ ����̴�.

	/*for (i = 0; i < 5; i++)
	{
		printf("%d input ? ", i + 1);
		scanf("%d%*c", &num[i]);
	}*/
	for (i = 0; i < 5; i++)
	{
		sum += num[i];
	}
	avg = (float)sum / 5;


	max = min = num[0];
	for (i = 0; i < 5; i++)
	{
		if (max < num[i]) //�ִ� ��
			max = num[i];

		if (min > num[i]) //�ּ� ��
			min = num[i];
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d, ",num[i]);
	}
	printf("\n");
	printf("��: %d, ���: %lf\n", sum, avg);
	printf("�ִ밪: %d, �ּҰ�: %d\n", max, min);

	return 0;
}