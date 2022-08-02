#include <stdio.h>

#define ArrSz 100 //배열크기는 매크로 상수가 최고!!

//배열(Array): 하나의 이름으로 같은 자료형을 갖는 데이터들의 집합
//즉 연속적인 메모리 공간

//int num[5]; :배열변수
//

int main()
{
	int num[ArrSz + 4] = { 0 }; //배열변수
	int count = 0;
	int i;

	printf("%d, %d \n", sizeof(num), sizeof(num[0])); //num:20
	//[]: 첨자(subscript)

	printf("%d, %p, %p \n\n", num[0], &num[0], num);//배열 변수명은 데이터가 아님
	//첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작주소를 갖는
	//포인터 상수이다.

	for (i = 0; i < ArrSz; i++)
	{
		printf("%d input ?(입력종료 : 0) ", i + 1);
		scanf("%d%*c", &num[i]);
		if (num[i] == 0)
			break;
		num[ArrSz + 0] += num[i];
	}

	count = i; //i번까지 카운트 했으니 count = i;로 하는게 맞다.

	num[ArrSz + 1] = num[ArrSz + 0] / count;


	num[ArrSz + 2] = num[ArrSz + 3] = num[0];

	for (i = 0; i < count; i++)
	{
		if (num[ArrSz + 2] < num[i]) //최대 값
			num[ArrSz + 2] = num[i];

		if (num[ArrSz + 3] > num[i]) //최소 값
			num[ArrSz + 3] = num[i];
	}
	printf("\n");

	for (i = 0; i < count; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	printf("합: %d, 평균: %lf\n", num[ArrSz + 0], (float)num[ArrSz + 1]);
	printf("최대값: %d, 최소값: %d\n", num[ArrSz + 2], num[ArrSz + 3]);
	int tmp;
	for (i = 0; i < (count - 1); i++)
	{
		for (int j = 0; j < ((count - 1)) - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	printf("Sort result : ");
	for (i = 0; i < count; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	return 0;
}