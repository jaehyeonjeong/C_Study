#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp; //���� ������ ����
	char ch;

	fp = fopen("DATA1.txt", "wt"); //1.��Ʈ�� ����
	if (fp == NULL)
	{
		printf("���� Open ����!! \n");
		exit(1); //���α׷� ��������
	}

	printf("stdin -> disk \n");
	//2.Ű���� �Է¹��� ���� ����, �Է����� ^Z�� �ƴϸ�
	while ((ch = fgetc(stdin)) != EOF)
	{
		fputc(ch, fp);
	}
	printf("data1.txt ���ϻ���.\n");
	fclose(fp); //3.��Ʈ�� �ݱ�

	return 0;
}