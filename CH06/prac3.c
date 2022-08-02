#include <stdio.h>

int main()
{
	char gender, married;
	char name[20];
	int salary;

	printf("성별 ? (여성:W, 남성:M) ");
	gender = getchar();

	while (getchar() != '\n'); //입력버퍼에 남겨진 모든 내용을 비운다

	printf("결혼 ? (기혼:Y, 미혼:N) ");
	married = getchar();

	printf("월급 ? ");
	scanf("%d%*c", &salary); //"%*c"는 정수 값 뒤에 입력되는 enter를 버린다

	printf("성명 ? ");
	gets(name);

	printf("\n\n성명: %s, 성별: %c, 기혼: %c, 월급: %d \n",
		name, gender, married, salary);

	return 0;
}