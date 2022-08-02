#include <stdio.h>

//구조체(struct): 관련이 있는 데이터들을 하나의 자료형으로 만들어 
//사용하게 한다.(즉 사용자 정의 자료형이다)
//이때 데이터들의 자료형은 어떠한 자료형이 와도 된다.

int main()
{
	//사용자정의 자료형 선언
	struct EMPLOYEE { //태그 네임 : EMPLOYEE
		char name[20]; //맴버(Member) // 20
		int salary; // 4
		float height; // 4
		char comAddr[100]; // 100
	}/*emps = { "홍길동", 3500000, 145, "서울시 강남구 100" }*/;
	//구조체 맴버 변수를 바로 초기화
	//맴버의 집합

	//자료형         구조체변수
	struct EMPLOYEE emps = {"홍길동", 3500000, 145, "서울시 강남구 100"};
	
	printf("%d, %d\n", sizeof(emps), sizeof(struct EMPLOYEE));
	//자료형으로 선언되어 크기가 같음
	
	//struct->사용자정의 자료형

	//구조체 변수를 통해서만 접근 가능
	//printf("%d \n", salary);

	// . : 구조체 맴버 연산자
	printf("%s, %d, %.2f, %s \n", emps.name, emps.salary,
		emps.height, emps.comAddr);
	//구조체를 통합자료형 변수라고 말함.

	printf("emps: %p, %p\n", &emps, emps.name); //emps.name = 주소
	//주소를 알려고 할때는 emps앞에 &을 붙임

	printf("성명 ? ");
	gets(emps.name);
	printf("월급 ? ");
	scanf("%d", &emps.salary);
	printf("키 ? ");
	scanf("%f%*c", &emps.height);
	printf("회사주소 ? ");
	gets(emps.comAddr);
	//주소인지 아닌지를 빠르게 판달할 필요가 있음.

	printf("%s, %d, %f, %s\n",
		emps.name, emps.salary, emps.height, emps.comAddr);

	printf("%d \n", emps.salary);
	return 0;
}