#include <stdio.h>

int main()
{
	//포인터변수: 변수의 시작주소 이거나 또는 1차원 배열의
	//시작주소를 저장하는 포인터
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
	for (int i = 0; i < sizeof(num); i++)
	{
		printf("%c", *(p2 + i));
	}
	printf("\n");

	printf("%c\n", *(p2 + 0));
	printf("%c\n", *(p2 + 1));
	printf("%c\n", *(p2 + 2));
	printf("%c\n", *(p2 + 3));
	printf("%c\n", *(p2 + 4));
	printf("%c\n", *(p2 + 5));
	printf("%c\n", *(p2 + 6));
	printf("%c\n", *(p2 + 7));
	printf("%c\n", *(p2 + 8));
	printf("%c\n", *(p2 + 9));
	printf("%c\n", *(p2 + 10));

	while (*p2) //시작주소 받다가 while로 주소가 가리키는 값을 판별(거짓이나올때까지)
	{
		printf("%c, ", *p2);
		p2++;
	}
	printf("\n\n");

	/*while (*msg)
	{
		printf("%c, ", *msg);
		msg++;
	}*/

	char* p3 = "multi campus !!!";
	//p3 = "multi campus !!!"; //문자열 상수 포인터를 p3가 받음





	printf("p2: %p, %s \n", p3, p3);

	return 0;
}