#include <stdio.h>
//�ݺ�Ƚ���� �˰����� �� �ּ� ���
int main()
{
	int i;

	//�ʱ�ȭ; ���ǽ�; ������
	for(i = 1; i <= 5; i++)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 5; i > 0; i--)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 1; i <= 5; i+=2)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 10; i <= 5; i++)
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	for (i = 1; i <= 5; i++); //null ����
		printf("%d, ", i);
	printf("\ti: %d\n", i);

	i = 1;
	for (; i <= 5; )
		printf("%d, ", i++);
	printf("\ti: %d\n", i);
	return 0;
}