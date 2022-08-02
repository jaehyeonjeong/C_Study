#include <stdio.h>
#include <string.h>

typedef struct EMPLOYEE { //태그 네임 : EMPLOYEE
	char name[20]; //맴버(Member) // 20
	int salary; // 4
	float height; // 4
	char comAddr[100]; // 100
}EMP;//함수안에 써놓은 구조체에는 함수안에서 밖에 못쓴다.

void funcA(EMP emps);
EMP funcB();

int main()
{
	
	struct EMPLOYEE emps = { "홍길동", 3500000, 145, "서울시 강남구 100" }, my;

	funcA(emps);
	my = funcB();
	printf("My: %s, %d, %.2f, %s\n",
		my.name, my.salary, my.height, my.comAddr);
	return 0;
}

void funcA(EMP emps) //struct EMPLOYEE emps
{
	printf("funcA: %s, %d, %.2f, %s\n",
		emps.name, emps.salary, emps.height, emps.comAddr);
}

EMP funcB()
{
	struct EMPLOYEE tmp;
	strcpy(tmp.name, "진달래");
	tmp.salary = 45001;
	tmp.height = 162;
	strcpy(tmp.comAddr, "음봉로");

	/*printf("funcB: %s, %d, %.2f, %s\n",
		tmp.name, tmp.salary, tmp.height, tmp.comAddr);*/
	return tmp;

}
