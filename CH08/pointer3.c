#include <stdio.h>

int main()
{
	int num[5] = { 100, 200, 300, 400, 500 };
	int i, *ptr;

	ptr = num; //num: �����ּ� num[0]�� �ȵ�

	//��������� �����Ͱ� ���� 

	for (i = 0; i < 5; i++)
	{
		printf("num(%p) = %d, %d, %d, %d\n",
			&num[i], num[i], *(ptr + i), *(num + i), ptr[i]); 
		//*(ptr + i)�� �ּ��� ����
	}
	printf("\n");

	char msg[20] = "Hello World.";
	char* p2;

	p2 = msg;

	printf("%c, %c, %c, %c\n", msg[0], *msg, *(msg + 1), *p2); //������
	printf("%p, %s, %s \n", msg, msg, p2); //�ּ�, �����ּ� ���� ���� ���Ұ� ����

	//p2�� ����Ͽ�  H e ..... o r l d�� ����Ͻÿ�.
	for(int i = 0; i < 20)
	return 0;
}