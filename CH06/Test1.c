#include <stdio.h>
#define PI 3.141592
//Ű����� ���� �������� �Է¹޾�.
//���� ����, ���� �ѷ��� ���Ͽ� ����Ͻÿ�.

/*
������
������ ? 7
���ǳ���: ???
���ǵѷ�: ???
*/
double Area(int radius);
double Cir(int radius);

int main()
{
	//1.�޸� �Ҵ�(���� ����)
	int radius;
	double area, cir;
	//float PI = 3.141592;
	//2.������ �Է�
	printf("������ ? ");
	scanf("%d", &radius);
	

	//3.ó��(���� �ѷ����)
	area = Area(radius); //radius * radius * PI
	cir = Cir(radius); // radius * 2 * PI

	//4.���
	printf("���ǳ��� : %lf\n", area);
	printf("���ǵѷ� : %lf\n", cir);

	return 0;
}

double Area(int radius)
{
	return radius * radius * PI;
}

double Cir(int radius)
{
	return radius * 2 * PI;
}