#include <stdio.h>

int main()
{
	//�����ͺ���: ������ �����ּ� �̰ų� �Ǵ� 1���� �迭��
	//�����ּҸ� �����ϴ� ������
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
	for (int i = 0; i < sizeof(num); i++)
	{
		printf("%c", *(p2 + i));
	}
	printf("\n");

	printf("%c\n", *(p2 + 0));
	printf("%c\n", *(p2 + 1));
	printf("%c\n", *(p2 + 2));
	printf("%c\n", *(p2 + 3));
	printf("%c\n", *(p2 + 4));
	printf("%c\n", *(p2 + 5));
	printf("%c\n", *(p2 + 6));
	printf("%c\n", *(p2 + 7));
	printf("%c\n", *(p2 + 8));
	printf("%c\n", *(p2 + 9));
	printf("%c\n", *(p2 + 10));

	while (*p2) //�����ּ� �޴ٰ� while�� �ּҰ� ����Ű�� ���� �Ǻ�(�����̳��ö�����)
	{
		printf("%c, ", *p2);
		p2++;
	}
	printf("\n\n");

	/*while (*msg)
	{
		printf("%c, ", *msg);
		msg++;
	}*/

	char* p3 = "multi campus !!!";
	//p3 = "multi campus !!!"; //���ڿ� ��� �����͸� p3�� ����





	printf("p2: %p, %s \n", p3, p3);

	return 0;
}