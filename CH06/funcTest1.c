#include <stdio.h>
#include <math.h>//#include ��� �Լ��� �Լ��� �����ϴ°� �� ����

//�Լ� : � ���� ó���ϴ� ������ �ڵ���� ����
//�Լ���� : 1.�Լ��� ����, 2.�Լ��� ȣ��, 3.�Լ��� ����(�ɼ�)
void funcA(); //3.�Լ������
//�Լ������� �����Ϸ����� �Լ��� ����(����)�� ���Ѵ�.
//�̸� �����ϸ� �����Ϸ��� ��� ���ڸ� int�� �����Ѵ�.
void funcB(int salary);
int funcD(); //�Լ������ ������ ������ �߿����� �ʴ�.
float funcE(int salTot, float rate);

int main()
{
	int salary = 3500000; //��������(�ڽ��� ����� �Լ������� ���)
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA(); //2.�Լ�ȣ���(���μ�)
	funcB(salary); //�Լ�ȣ���(���μ�)

	sudang = funcD(); //���� �ޱ� ���ؼ��� ���Թ����� �޾ƶ�
	printf("main() ����: %d\n", sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("tax : %f\n", tax);

	printf("�Ǽ��ɾ� : %f \n",(salary+sudang) - tax);

	printf("10�� ������: %lf \n", sqrt(10.0));//������ �ȵ�

	printf("main() end. \n");


	return 0;
}

float funcE(int salTot, float rate)
{
	//printf("funcE() %d, %f", salTot, rate);
	//printf("funcE(): ���� : %f \n", salTot * rate);
	return salTot * rate;
}

//1.�Լ����Ǻ�
void funcA() //�Լ��ش�
{		//�Լ��ٵ�
	printf("funcA() start.\n");
	return; //�θ��Լ��� ��� ����
	printf("funcA() end.\n");
	//funcA end() ����
}		//�Լ��ٵ�

//���μ��� ���μ��� ������ �ڷ����� ���ƾ� �Ѵ�.
void funcB(int salary) //���μ�
{
	printf("funcB() salary: %d.\n", salary);
	//�θ��Լ��� �ִ� salary�ʹ� �ٸ� �����̴�.
}

int funcD() //default�� int��.
{
	int over_time = 15;

	//printf("funcD() ���� : %d \n", over_time * 37000);
	return over_time * 37000;
}