#include <stdio.h>
#include <string.h>

int main()
{
	char names[10][20] = { "kim", "lee", "sin", "jo", "kim",
						  "chae", "jin", "bak", "so", "chol" };

	int i, j;
	char tmp[20];

	printf("\n배열 초기화\n");
	for (j = 0; j < 10; j++)
	{
		printf("%5s ", names[j]);
	}
	printf("\n");

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			//문자배열 비교
			if (strcmp(names[j], names[j + 1]) == -1)
			{
				*tmp = *(names[i]);
				*(names[i]) = *(names[i + 1]);
				*(names[i + 1]) = *tmp;
			}
		}
	}

	printf("\nSorted Result\n");
	for (j = 0; j < 10; j++)
	{
		printf("%5s ", names[j]);
	}
	printf("\n");

	return 0;
}