#include <stdio.h>

int main()
{
	//1.변수 선언(메모리 할당)
	int i, sum = 0;
	int start, end, tmp;

	//2.데이터 입력
	printf("start ? ");
	scanf("%d", &start);
	printf("end ? ");
	scanf("%d", &end);

	//3.처리 (누적)
	if (start < end)
	{
		for (i = start; i <= end; i++)
		{
			sum += i;
			if (sum > 3000)
				break; //break를 만나면 반복문을 탈출
		}
	}
	else if (start > end)
	{
		for (i = end; i <= start; i++)
			sum += i;
	}
	
	/*if (start > end)
	{
		start = tmp;
		tmp = end;
		end = start;
	}*/

	//4.출력
	if (i - 1 == end)
		printf("%d부터 %d까지 : %d \n", start, end, sum);
	else
		printf("%d부터 %d까지 : %d \n", start, i, sum);
	return 0;
}