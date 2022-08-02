#include <stdio.h>
//사용자정의 자료형 선언
typedef struct EMPLOYEE { //태그 네임 : EMPLOYEE
	char name[20]; //맴버(Member) // 20
	int salary; // 4
	float height; // 4
	char comAddr[100]; // 100
}/*emps = { "홍길동", 3500000, 145, "서울시 강남구 100" }*/
EMP;
int main()
{
	
	 //재정의된 이름 호출(재정의된 자료형 명)
	//구조체 맴버 변수를 바로 초기화
	//맴버의 집합

	//자료형         구조체변수
	struct EMPLOYEE emps = { "홍길동", 3500000, 145, "서울시 강남구 100" };

	printf("성명 ? ");
	gets(emps.name);
	printf("월급 ? ");
	scanf("%d", &emps.salary);
	printf("키 ? ");
	scanf("%f%*c", &emps.height);
	printf("회사주소 ? ");
	gets(emps.comAddr);
	//주소인지 아닌지를 빠르게 판달할 필요가 있음.

	printf("%s, %d, %.2f, %s\n",
		emps.name, emps.salary, emps.height, emps.comAddr);
	return 0;
}