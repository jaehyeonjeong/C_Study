#include <stdio.h>
#include <string.h>

#define EMP_SZ 30

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
	struct EMPLOYEE emps[EMP_SZ]; //1차원 배열, 열이라고 함.
	int i, Cn;

	for (i = 0; i < EMP_SZ; i++)
	{
		printf("성명 ? (입력종료 : end)");
		gets(emps[i].name);
		if (strcmp(emps[i].name, "end") == 0)
		{
			break;
		}
		printf("월급 ? ");
		scanf("%d", &emps[i].salary);
		printf("키 ? ");
		scanf("%f%*c", &emps[i].height);
		printf("회사주소 ? ");
		gets(emps[i].comAddr);
	}

	Cn = i;
	
	//주소인지 아닌지를 빠르게 판달할 필요가 있음.
	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %.2f, %s\n",
			emps[i].name, emps[i].salary,
			emps[i].height, emps[i].comAddr);
	}
	
	return 0;
}