#include <stdio.h>

void ConvertString(char ptr[]);

int main()
{
	char msg[30] = "Hello World !!!";

	printf("before msg: %s \n", msg);
	ConvertString(msg);
	printf("after msg: %s \n", msg);

	return 0;
}

//��,�ҹ��ڸ� ��ȯ
void ConvertString(char* ptr)
//void ConvertString(char ptr[30])
//void ConvertString(char ptr[])
//�迭�� �̷��� �������� ���� �� �ִµ� �ڽ� ������ �ּҸ� �޴´�.
{
	//int i = 0;
	printf("ptr sizeof : %d \n", sizeof(ptr));
	while (*ptr)
	{
		if (*(ptr) >= 65 && *(ptr) <= 90)
		{
			*(ptr) += 32;
		}

		else if (*(ptr) >= 97 && *(ptr) <= 122)
		{
			*(ptr) -= 32;
		}
		
		ptr++; //�ּҰ� �̵�, *�� ������ ������ ����
		//i++;
	}
}