#include <stdio.h>

int main()
{
	int num[5] = { 100, 200, 300, 400, 500 };
	int i, *ptr;

	ptr = num; //num: 시작주소 num[0]은 안됨

	//산술연산자 포인터가 높다 

	for (i = 0; i < 5; i++)
	{
		printf("num(%p) = %d, %d, %d, %d\n",
			&num[i], num[i], *(ptr + i), *(num + i), ptr[i]); 
		//*(ptr + i)은 주소의 연산
	}
	printf("\n");

	char msg[20] = "Hello World.";
	char* p2;

	p2 = msg;

	printf("%c, %c, %c, %c\n", msg[0], *msg, *(msg + 1), *p2); //데이터
	printf("%p, %s, %s \n", msg, msg, p2); //주소, 시작주소 부터 쓰는 원소값 나열

	//p2를 사용하여  H e ..... o r l d를 출력하시오.
	for(int i = 0; i < 20)
	return 0;
}