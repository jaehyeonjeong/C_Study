#include <stdio.h>

//����ü(struct): ������ �ִ� �����͵��� �ϳ��� �ڷ������� ����� 
//����ϰ� �Ѵ�.(�� ����� ���� �ڷ����̴�)
//�̶� �����͵��� �ڷ����� ��� �ڷ����� �͵� �ȴ�.

int main()
{
	//��������� �ڷ��� ����
	struct EMPLOYEE { //�±� ���� : EMPLOYEE
		char name[20]; //�ɹ�(Member) // 20
		int salary; // 4
		float height; // 4
		char comAddr[100]; // 100
	}/*emps = { "ȫ�浿", 3500000, 145, "����� ������ 100" }*/;
	//����ü �ɹ� ������ �ٷ� �ʱ�ȭ
	//�ɹ��� ����

	//�ڷ���         ����ü����
	struct EMPLOYEE emps = {"ȫ�浿", 3500000, 145, "����� ������ 100"};
	
	printf("%d, %d\n", sizeof(emps), sizeof(struct EMPLOYEE));
	//�ڷ������� ����Ǿ� ũ�Ⱑ ����
	
	//struct->��������� �ڷ���

	//����ü ������ ���ؼ��� ���� ����
	//printf("%d \n", salary);

	// . : ����ü �ɹ� ������
	printf("%s, %d, %.2f, %s \n", emps.name, emps.salary,
		emps.height, emps.comAddr);
	//����ü�� �����ڷ��� ������� ����.

	printf("emps: %p, %p\n", &emps, emps.name); //emps.name = �ּ�
	//�ּҸ� �˷��� �Ҷ��� emps�տ� &�� ����

	printf("���� ? ");
	gets(emps.name);
	printf("���� ? ");
	scanf("%d", &emps.salary);
	printf("Ű ? ");
	scanf("%f%*c", &emps.height);
	printf("ȸ���ּ� ? ");
	gets(emps.comAddr);
	//�ּ����� �ƴ����� ������ �Ǵ��� �ʿ䰡 ����.

	printf("%s, %d, %f, %s\n",
		emps.name, emps.salary, emps.height, emps.comAddr);

	printf("%d \n", emps.salary);
	return 0;
}