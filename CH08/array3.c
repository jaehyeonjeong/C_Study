#include <stdio.h>

int main()
{
	char ch = 'a', i;
	char str[20] = "jae hyeon";//null�� �ڵ����� ä����, �� ����� NULL�� �ٸ�
	//1���� ���ڹ迭�� ���ڿ��� �ϳ� �����Ѵ�.

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));

	printf("%c, %p, %p\n", str[0], &str[0], &str);

	printf("\nstr : %p, %s \n\n", str, str); //�޸��ּҴ� ���� ����
	//%s�� �ּҸ� �޴µ� �����ּҷκ��� ���Ұ��� ����.

	printf("input string ? ");
	//scanf("%s", str); //�迭������ �ּ���.
	gets(str); //standard input, �迭�� ��踦 ���� �� ����.
	//fgets(str, 10, stdin);
	//enter�� null�� �ٲ㼭 ������.
	printf("\nstr : %p, %s \n\n", str, str);

	for (i = 0; i < 10; i++)
		printf("%p: %c, %d \n", &str[i], str[i], str[i]);

	return 0;
}