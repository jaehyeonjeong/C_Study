//p.209 �������� 5-2
#include <stdio.h>

int main()
{
	int num, max = 0;
	int tmp = 0;

	for (int i = 1; i <= 5; i++)
	{
		printf("�� �Է� ? ");
		scanf("%d", &num);

		if (num > max)
		{
			tmp = num;
			num = max;
			max = tmp;
		}
	}
	
	printf("max : %d", max);
}