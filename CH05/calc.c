#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1,num2;
	char op;
	while (1)
	{
		do {
			printf("���ϱ�(a), ����(s), ���ϰ�(m), ������(d), ����(q) \n");
			printf("������ ù ���ڸ� �Է��ϼ��� ? ");
			op = toupper(getchar());   // A[enter]
			//�Լ��ȿ� �Լ��� ������ ���� �ȿ� �ִ� �Լ��� ���� ȣ��
			getchar(); //enter�� ����
			printf("\n");
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');
	
		if (op == 'Q')
			break;

		printf("ù ��° �� : ");
		scanf("%d%*c", &num1);  //100

		printf("�� ��° �� : ");
		scanf("%d%*c", &num2);    //30

		if (op == 'A')
			printf("%d + %d = %d \n\n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n\n", num1, num2, num1 - num2);
		else if (op == 'D')
		{
			if (num2 != 0)
				printf("%d / %d = %d \n\n", num1, num2, num1 / num2);
			//else
				//printf("num2�� 0���� ���� �� �����.\n");
		}
		else if (op == 'M')
			printf("%d * %d = %d \n\n", num1, num2, num1 * num2);
		/*
		printf("����ұ��? (y/n) \n");
		scanf("%c%*c", &op);
		if (op == 'Y' || op == 'y')
			continue;
		else
			break;
			*/

	}


	printf("End. \n");

	return 0 ;
}
