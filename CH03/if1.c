#include <stdio.h>

int main()
{
	int first, second;
	char op;

	printf("전화번호를 입력하세요.\n");
	scanf("%d%*c%d", &first, &second);
	printf("first: %d, second: %d\n\n", first, second);

	return 0;
}