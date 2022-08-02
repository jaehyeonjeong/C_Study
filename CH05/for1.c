#include <stdio.h>
//반복횟수를 알고있을 때 주소 사용
int main()
{
	int i;

	//초기화; 조건식; 증감식
	for(i = 1; i <= 5; i++)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 5; i > 0; i--)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 1; i <= 5; i+=2)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 10; i <= 5; i++)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 1; i <= 5; i++); //null 문장
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	i = 1;
	for (; i <= 5; )
		printf("%d, ", i++);
	printf("\ti: %d\n", i);
	return 0;
}