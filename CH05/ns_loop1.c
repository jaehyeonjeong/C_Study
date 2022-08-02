#include <stdio.h>

int main()
{
	char ch;
	int i;
	char in_char;

	printf("input char?"); //H,
	in_char = getchar();

	for (i = 1; i <= 3; i++)
	{
		ch = 'A';//시작값을 다시 시행해줘야 함.
		while (ch <= 90)
		{
			printf("%c ", ch);
			if (ch == in_char)
				//break;//자기가 포함되어 있는 반복문만 나가게 됨
				goto move;
			ch++;
		}

		printf("\n");
	}

move: //레이블 명
	printf("End\n");
	return 0;
}