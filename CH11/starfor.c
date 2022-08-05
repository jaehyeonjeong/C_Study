#include <stdio.h>

void triangle_1(int n);
void triangle_2(int n);
void triangle_3(int n);
void triangle_4(int n);

int main()
{
	int n, m;
	int i = 5;
	do
	{
		printf("n ? ");
		scanf("%d", &n);
		printf("m ? (5입력시 프로그램 종료)");
		scanf("%d", &m);

		if ((m < 1 || m > 4) || (n % 2 == 0) || (n > 100))
		{
			printf("INPUT ERROR!\n");
		}
		else
		{
			switch (m)
			{
			case 1:
				triangle_1(n);
				break;
			case 2:
				triangle_2(n);
				break;
			case 3:
				triangle_3(n);
				break;
			case 4:
				triangle_4(n);
				break;
			case 5:
				exit(0);
				break;
			}
			i--;
		}
	} while (i);
	

	return 0;
}

void triangle_1(int n)
{
	printf("triangle 1()\n");
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (i >= j)
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

void triangle_2(int n)
{
	printf("triangle 2()\n");
	//int i, j;
	/*for (j = n; j > 0; j--)
	{
		for (i = 0; i < n; i++)
		{
			printf("* ");
		}
		printf("\n");
	}*/

	/*for (j = n; j > 0; j--)
	{
		for (i = 0; 0 < j - i; i++)
		{
			printf("* ");
		}
		printf("\n");
	}*/

	int i, j;
	//int Cn = n - 1;

	//n = 5에서 줬을때 배열
	/*for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("[%d][%d] = !\t", i, j);
		}
		printf("\n");
	}
	printf("\n\n");*/

	//Cn을 두고 배열
	/*for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < Cn; j++)
		{
			printf("[%d][%d] = !\t", i, j);
		}
		Cn--;
		printf("\n");
	}
	printf("\n\n");*/


	int num1[100][100];
	int num2[100][100];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			num1[i][j] = 1;
			//printf("num1[%d][%d] = %d\t", i, j, num1[i][j]);
		}
		//printf("\n");
	}
	//printf("\n\n");

	int Cn2 = n - 1;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < Cn2; j++)
		{
			num2[i][j] = 1;
			//printf("num2[%d][%d] = %d\t", i, j, num2[i][j]);
		}
		Cn2--;
		//printf("\n");
	}
	//printf("\n\n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
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
}

void triangle_3(int n)
{
	printf("triangle 3()\n");
}

void triangle_4(int n)
{
	printf("triangle 4()\n");
}