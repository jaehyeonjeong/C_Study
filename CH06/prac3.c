#include <stdio.h>

int main()
{
	char gender, married;
	char name[20];
	int salary;

	printf("���� ? (����:W, ����:M) ");
	gender = getchar();

	while (getchar() != '\n'); //�Է¹��ۿ� ������ ��� ������ ����

	printf("��ȥ ? (��ȥ:Y, ��ȥ:N) ");
	married = getchar();

	printf("���� ? ");
	scanf("%d%*c", &salary); //"%*c"�� ���� �� �ڿ� �ԷµǴ� enter�� ������

	printf("���� ? ");
	gets(name);

	printf("\n\n����: %s, ����: %c, ��ȥ: %c, ����: %d \n",
		name, gender, married, salary);

	return 0;
}