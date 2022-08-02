#include <stdio.h>
//반복횟수를 모를 때 주로 사용
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