#include <stdio.h>

int main()
{
	int score[5][7] = {
		{56, 90, 40, 64},	//0(????),0(????),0(????)
		{45, 87, 84, 12},	
		{31, 45, 22, 15},
		{84, 94, 46, 48},
		{75, 64, 87, 33}
	};
	char stdNames[5][20] = { "ö??", "????", "?ٵ?", "????", "????" };


	int i, j;

	//???? ?????? ???ϴ? ?ݺ????? ????
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
	}//?????˰?????!!

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
	printf("???? ???? ???? ???? ???? ???? ???? ????\n");
	printf("==========================================\n");
}