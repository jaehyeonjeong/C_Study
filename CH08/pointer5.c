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

//대,소문자를 변환
void ConvertString(char* ptr)
//void ConvertString(char ptr[30])
//void ConvertString(char ptr[])
//배열은 이렇게 세가지로 받을 수 있는데 자식 값에는 주소만 받는다.
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
		
		ptr++; //주소가 이동, *을 넣으면 역참조 무시
		//i++;
	}
}