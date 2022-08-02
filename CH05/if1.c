#include <stdio.h>
#include <stdlib.h> //exit(1)
//제어문이 뭐니?
//조건제어: if, switch 
//반복제어: for, while, do...while 
//기타제어: break, continue, goto

int main()
{
	int score;

	printf("점수 ? ");
	scanf("%d", &score);

	//exit(1);
	if (score > 100 || score < 0)
	{
		printf("100보다 크거나 0보다 작은수를 입력하셨습니다.\n");
		exit(1);
	}

	if (score >= 90)
		printf("%d, A학점\n", score);
	else if (score >= 80)
		printf("%d, B학점\n", score);
	else if (score >= 70)
		printf("%d, C학점\n", score);
	else if (score >= 60)
		printf("%d, D학점 노력하세요\n", score);
	else
		printf("%d, 최악이네요!!!!\n", score);

	printf("End \n");
	return 0;
}