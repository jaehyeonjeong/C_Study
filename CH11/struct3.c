#include <stdio.h>
#include <string.h>

#define EMP_SZ 30

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
	struct EMPLOYEE emps[EMP_SZ]; //1���� �迭, ���̶�� ��.
	int i, Cn;

	for (i = 0; i < EMP_SZ; i++)
	{
		printf("���� ? (�Է����� : end)");
		gets(emps[i].name);
		if (strcmp(emps[i].name, "end") == 0)
		{
			break;
		}
		printf("���� ? ");
		scanf("%d", &emps[i].salary);
		printf("Ű ? ");
		scanf("%f%*c", &emps[i].height);
		printf("ȸ���ּ� ? ");
		gets(emps[i].comAddr);
	}

	Cn = i;
	
	//�ּ����� �ƴ����� ������ �Ǵ��� �ʿ䰡 ����.
	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %.2f, %s\n",
			emps[i].name, emps[i].salary,
			emps[i].height, emps[i].comAddr);
	}
	
	return 0;
}