#include <stdio.h>

int main()
{
	int num[7][7] = { 0, };

	int i, j;
	int count = 1;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			num[i][j] += count;
			count++;
			if (i < j)
			{
				//consol�� �ƹ��͵� ������� �ʰڴٶ�� ��
			}
			else
			{
				printf("%3d ", num[i][j]);
			}
		}
		printf("\n");
	}
	

	return 0;
}