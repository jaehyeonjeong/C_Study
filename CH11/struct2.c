#include <stdio.h>
#include <string.h>

typedef struct EMPLOYEE { //�±� ���� : EMPLOYEE
	char name[20]; //�ɹ�(Member) // 20
	int salary; // 4
	float height; // 4
	char comAddr[100]; // 100
}EMP;//�Լ��ȿ� ����� ����ü���� �Լ��ȿ��� �ۿ� ������.

void funcA(EMP emps);
EMP funcB();

int main()
{
	
	struct EMPLOYEE emps = { "ȫ�浿", 3500000, 145, "����� ������ 100" }, my;

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
	strcpy(tmp.name, "���޷�");
	tmp.salary = 45001;
	tmp.height = 162;
	strcpy(tmp.comAddr, "������");

	/*printf("funcB: %s, %d, %.2f, %s\n",
		tmp.name, tmp.salary, tmp.height, tmp.comAddr);*/
	return tmp;

}
