#include <stdio.h>
#define EQ "==================" //��ũ�� ���
#define MSG "������ C ����" //��ũ�� ���
#define SUM(x,y) x+y //��ũ�� �Լ�

//#���� �����ϴ� ������ ��ó�����̶� �Ѵ�(;���� ������ �ʴ´�)
int main()
{
	printf("C ����� �ڷ���(DataType) \n");

	//������ �迭�� ������ �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ�ް�,
	//�����Ϸ����� �ڷ����� �˸���.
	char ch;
	int age = 10; //������ �ʱ�ȭ
	double height = 175.1;
	const float PI = 3.141592; //������ ���ȭ(�ݵ�� �ʱ�ȭ)

	printf("%s \n", EQ);
	printf("%s \n", MSG);
	ch = 'A';

	printf("%c, %d, %lf, %f \n", ch, age, height, PI);

	age = 27;
	//PI = 1.5;
	printf("%c, %d, %lf, %f \n", ch, age, height, PI);



	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d \n", sizeof(ch), sizeof(age), sizeof(height));

	printf("%d \n", SUM(100, 200));
	printf("%s \n", EQ);

	printf("������ �ּ�: % p, % p, % p, % p \n", &ch, &age, &height, &PI);

	return 0;
}