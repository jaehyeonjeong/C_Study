#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "king", s2[20] = "";
	char name[20];
	char tmp[100];

	printf("s1: %s, s2 : %s\n", s1, s2);
	printf("%d, %d \n", sizeof(s1), strlen(s1));//20, 4(NULL 미포함)

	//s2 = s1;잘못됨
	
	strcpy(s2, s1);//문자열 처리 함수
	printf("s1: %s, s2 : %s \n", s1, s2);

	printf("input s1 ? "); //dom
	gets(s1);
	strcat(s2, s1);

	printf("s1: %s, s2 : %s \n\n", s1, s2);

	printf("%d \n", strcmp(s2, s1));
	printf("%d \n", strcmp(s1, s2));
	printf("%d \n", strcmp(s2, "kingdom"));
	printf("%d \n", strcmp("apple", "Apple"));
	printf("%d \n\n", strcmp("Apple", "Apple"));

	do
	{
		printf("input name ? ");
		gets(tmp); //aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa[enter]
	} while (strlen(tmp) >= sizeof(name));
	strcpy(name, tmp);
	printf("name: %s \n", name);
	return 0;
}