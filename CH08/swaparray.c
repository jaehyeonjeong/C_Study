#include <stdio.h>

int main()
{
	int score[5][7] = {
		{56, 90, 40, 64},	//0(총점),0(평균),0(석차)
		{45, 87, 84, 12},	
		{31, 45, 22, 15},
		{84, 94, 46, 48},
		{75, 64, 87, 33}
	};
	char stdNames[5][20] = { "철수", "영희", "바둑", "수현", "지완" };


	int i, j;

	//총점 평균을 구하는 반복문을 찍자
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			score[i][4] += score[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		score[i][5] = score[i][4] / 4;
	}

	for (i = 0; i < 6; i++)
	{
		score[i][6] = 1;

		for (j = 0; j < 5; j++)
		{
			if (score[i][5] < score[j][5])
			{
				score[i][6]++;
			}
		}
	}//석차알고리즘!!

	heading();
	for (i = 0; i < 5; i++)
	{
		printf("%4s ", stdNames[i]);
		for (j = 0; j < 7; j++)
		{
			printf("%3d, ", score[i][j]);
		}

		printf("\n");
	}


	return 0;
}

heading()
{
	printf("==========================================\n");
	printf("성명 국어 영어 수학 과학 총점 평균 석차\n");
	printf("==========================================\n");
}