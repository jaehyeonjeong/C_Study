#include <stdio.h>
//�ݺ�Ƚ���� �� �� �ַ� ���
int main()
{
	char ch;

	ch = 'a';

	while (ch <= 90)
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");

	ch = 'a';
	do 
	{
		printf("%c", ch);
		ch++;
	} while (ch <= 90);
	printf("\n");


	return 0;
}