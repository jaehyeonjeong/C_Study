#include <stdio.h> //헤더파일 : 시스템 헤더 파일
//include -> 헤더파일을 포함 시켜 1000줄이상의 코드가 포함이 됨
//전처리문(;으로 끝나면 안됨)
//stdio.h -> 입/출력과 관련된 함수 정보를 제공

funcA() //호출될 때 실행
{
	printf("funcA() start.\n");
	printf("funcA() end.\n");
	//절차지향으로 실행
}

//함수의 집합
int main() // main()는 자동으로 실행하는 진입점 함수
{
	printf("main() start! \n");
	funcA(); //함수호출
	printf("정재현 \n");

	return 0;
}

