#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input c1 ? ");
	c1 = getchar();           //A[enter], ABCDEFG[enter]
	printf("c1: %c\n", c1);

	getchar(); //Enter���� �������ٰ� ��ٸ�
	//while (getchar() != '\n');
	//while�� ���۾ȿ� �ִ� �Լ��� �� ����

	printf("input c2 ? ");
	c2 = getchar();
	printf("c2: %c\n", c2);
	return 0;
}