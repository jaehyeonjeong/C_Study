#include <stdio.h>

int main()
{
    printf("%d%c%c",555, 10, 13);
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555); //오른쪽 정렬
    printf("/%-10d/ \n",555); //왼쪽 정렬
    printf("/%010d/ \n\n",555); //앞에 0으로 채워주기

    printf("/%f/ \n",8192.1978); //소수점 6자리가 찍힘
    printf("/%13f/ \n",8192.1978);
    printf("/%*.*f/ \n",13,2,8192.1978); //자릿수를 명시할 수 있다.
    printf("/%13.2f/ \n",8192.1978); //13자리중에 소수점 2자리만 찍음
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%20s\n", "C Language..."); //20자리로 남은자리 없이 정렬
    printf("%.5s \n\n", "C Language..."); //왼쪽에서 5자리수부터 자름

    printf("%d %o %x \n",67,67,67);
    printf("%d %#o %#x \n",067,067,067);
    printf("%d %#o %#x \n",0x67,0x67,0x67);
	printf("%x, %#10x, %#010x \n\n", 0x1234, 0x1234, 0x1234); 

	return 0 ;
}

