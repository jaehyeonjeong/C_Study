#include <stdio.h>

int main()
{
	//1.���� ����(�޸� �Ҵ�)
	int i, sum = 0;
	int start, end, tmp;

	//2.������ �Է�
	printf("start ? ");
	scanf("%d", &start);
	printf("end ? ");
	scanf("%d", &end);

	//3.ó�� (����)
	if (start < end)
	{
		for (i = start; i <= end; i++)
		{
			sum += i;
			if (sum > 3000)
				break; //break�� ������ �ݺ����� Ż��
		}
	}
	else if (start > end)
	{
		for (i = end; i <= start; i++)
			sum += i;
	}
	
	/*if (start > end)
	{
		start = tmp;
		tmp = end;
		end = start;
	}*/

	//4.���
	if (i - 1 == end)
		printf("%d���� %d���� : %d \n", start, end, sum);
	else
		printf("%d���� %d���� : %d \n", start, i, sum);
	return 0;
}