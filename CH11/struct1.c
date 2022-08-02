#include <stdio.h>

//����ü(struct): ������ �ִ� �����͵��� �ϳ��� �ڷ������� ����� 
//����ϰ� �Ѵ�.(�� ����� ���� �ڷ����̴�)
//�̶� �����͵��� �ڷ����� ��� �ڷ����� �͵� �ȴ�.

int main()
{
	//��������� �ڷ��� ����
	typedef struct EMPLOYEE { //�±� ���� : EMPLOYEE
		char name[20]; //�ɹ�(Member) // 20
		int salary; // 4
		float height; // 4
		char comAddr[100]; // 100
	}/*emps = { "ȫ�浿", 3500000, 145, "����� ������ 100" }*/
	EMP; //�����ǵ� �̸� ȣ��(�����ǵ� �ڷ��� ��)
	//����ü �ɹ� ������ �ٷ� �ʱ�ȭ
	//�ɹ��� ����

	//�ڷ���         ����ü����
	struct EMPLOYEE emps = {"ȫ�浿", 3500000, 145, "����� ������ 100"};
	struct EMPLOYEE* ptr; //����ü ������ ����

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

	//�ּ����� �ƴ����� ������ �Ǵ��� �ʿ䰡 ����.

	printf("%s, %d, %f, %s\n",
		emps.name, emps.salary, emps.height, emps.comAddr);

	printf("%d \n", emps.salary);

	EMP tmp; //�������� �������� ��� ������ �����ϴ�.

	tmp = emps;

	printf("%s, %d, %f, %s\n\n",
		tmp.name, tmp.salary, tmp.height, tmp.comAddr);
	//�����ڷ��� �����̹Ƿ� �״�� ���簡 ����

	printf("ptr sizeof: %d \n", sizeof(ptr));
	ptr = &emps; //����ü���� ���۵� ���� ����
	printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary,
		(*ptr).height, (*ptr).comAddr);
	//-> : ����ü ������ ������
	return 0;
}