#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input c1 ? ");
	c1 = getchar();           //A[enter], ABCDEFG[enter]
	printf("c1: %c\n", c1);

	getchar(); //Enter값이 버려지다가 기다림
	//while (getchar() != '\n');
	//while은 버퍼안에 있는 함수를 다 지움

	printf("input c2 ? ");
	c2 = getchar();
	printf("c2: %c\n", c2);
	return 0;
}