#include <stdio.h>
#include <stdlib.h> //exit(1)
//����� ����?
//��������: if, switch 
//�ݺ�����: for, while, do...while 
//��Ÿ����: break, continue, goto

int main()
{
	int score;

	printf("���� ? ");
	scanf("%d", &score);

	//exit(1);
	if (score > 100 || score < 0)
	{
		printf("100���� ũ�ų� 0���� �������� �Է��ϼ̽��ϴ�.\n");
		exit(1);
	}

	if (score >= 90)
		printf("%d, A����\n", score);
	else if (score >= 80)
		printf("%d, B����\n", score);
	else if (score >= 70)
		printf("%d, C����\n", score);
	else if (score >= 60)
		printf("%d, D���� ����ϼ���\n", score);
	else
		printf("%d, �־��̳׿�!!!!\n", score);

	printf("End \n");
	return 0;
}