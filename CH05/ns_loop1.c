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
		ch = 'A';//���۰��� �ٽ� ��������� ��.
		while (ch <= 90)
		{
			printf("%c ", ch);
			if (ch == in_char)
				//break;//�ڱⰡ ���ԵǾ� �ִ� �ݺ����� ������ ��
				goto move;
			ch++;
		}

		printf("\n");
	}

move: //���̺� ��
	printf("End\n");
	return 0;
}