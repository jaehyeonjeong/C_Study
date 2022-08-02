#include <stdio.h>

int main()
{
	char ch = 'a', i;
	char str[20] = "jae hyeon";//null이 자동으로 채워짐, 단 공백과 NULL은 다름
	//1차원 문자배열은 문자열을 하나 저장한다.

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));

	printf("%c, %p, %p\n", str[0], &str[0], &str);

	printf("\nstr : %p, %s \n\n", str, str); //메모리주소는 연산 가능
	//%s는 주소를 받는데 시작주소로부터 원소값을 받음.

	printf("input string ? ");
	//scanf("%s", str); //배열변수는 주소임.
	gets(str); //standard input, 배열의 경계를 넘을 수 있음.
	//fgets(str, 10, stdin);
	//enter를 null로 바꿔서 저장함.
	printf("\nstr : %p, %s \n\n", str, str);

	for (i = 0; i < 10; i++)
		printf("%p: %c, %d \n", &str[i], str[i], str[i]);

	return 0;
}