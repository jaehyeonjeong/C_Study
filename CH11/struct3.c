#include <stdio.h>
//��������� �ڷ��� ����
typedef struct EMPLOYEE { //�±� ���� : EMPLOYEE
	char name[20]; //�ɹ�(Member) // 20
	int salary; // 4
	float height; // 4
	char comAddr[100]; // 100
}/*emps = { "ȫ�浿", 3500000, 145, "����� ������ 100" }*/
EMP;
int main()
{
	
	 //�����ǵ� �̸� ȣ��(�����ǵ� �ڷ��� ��)
	//����ü �ɹ� ������ �ٷ� �ʱ�ȭ
	//�ɹ��� ����

	//�ڷ���         ����ü����
	struct EMPLOYEE emps = { "ȫ�浿", 3500000, 145, "����� ������ 100" };

	printf("���� ? ");
	gets(emps.name);
	printf("���� ? ");
	scanf("%d", &emps.salary);
	printf("Ű ? ");
	scanf("%f%*c", &emps.height);
	printf("ȸ���ּ� ? ");
	gets(emps.comAddr);
	//�ּ����� �ƴ����� ������ �Ǵ��� �ʿ䰡 ����.

	printf("%s, %d, %.2f, %s\n",
		emps.name, emps.salary, emps.height, emps.comAddr);
	return 0;
}