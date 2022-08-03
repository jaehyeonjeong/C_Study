#include <stdio.h>

int main()
{
	int i , j;
	int n = 5;
	int Cn = n - 1;

	//n = 5에서 줬을때 배열
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("[%d][%d] = !\t", i, j);
		}
		printf("\n");
	}
	printf("\n\n");

	//Cn을 두고 배열
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < Cn; j++)
		{
			printf("[%d][%d] = !\t", i, j);
		}
		Cn--;
		printf("\n");
	}
	printf("\n\n");


	int num1[5][5];
	int num2[5][5];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			num1[i][j] = 1;
			printf("num1[%d][%d] = %d\t", i, j, num1[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	int Cn2 = 4;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < Cn2; j++)
		{
			num2[i][j] = 1;
			printf("num2[%d][%d] = %d\t", i, j, num2[i][j]);
		}
		Cn2--;
		printf("\n");
	}
	printf("\n\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((num1[i][j] == 1) && (num2[i][j] == 1))
			{
				//num1배열의 위치와 num2배열의 위치 모두 1일때
				printf("\t");
			}
			else
			{
				if (i > j)
				{
					printf("\t");
				}
				else
				{
					printf("*\t");
				}
			}
		}
		printf("\n");
	}

	return 0;
}