#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp; //파일 포인터 선언
	char ch;

	fp = fopen("DATA1.txt", "wt"); //1.스트림 연결
	if (fp == NULL)
	{
		printf("파일 Open 실패!! \n");
		exit(1); //프로그램 강제종료
	}

	printf("stdin -> disk \n");
	//2.키보드 입력문자 파일 저장, 입력종료 ^Z이 아니면
	while ((ch = fgetc(stdin)) != EOF)
	{
		fputc(ch, fp);
	}
	printf("data1.txt 파일생성.\n");
	fclose(fp); //3.스트림 닫기

	return 0;
}