#include <stdio.h>

//배열(Array): 하나의 이름으로 같은 자료형을 갖는 데이터들의 집합
//즉 연속적인 메모리 공간

//int num[5]; :배열변수
//

int main()
{
	int num[5] = { 300, 20, 70, -40, 1500 }; //배열변수
	int i, sum = 0;
	float avg;
	int max, min;

	printf("%d, %d \n", sizeof(num), sizeof(num[0])); //num:20
	//[]: 첨자(subscript)

	printf("%d, %p, %p \n\n", num[0], &num[0], num);//배열 변수명은 데이터가 아님
	//첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작주소를 갖는
	//포인터 상수이다.

	/*for (i = 0; i < 5; i++)
	{
		printf("%d input ? ", i + 1);
		scanf("%d%*c", &num[i]);
	}*/
	for (i = 0; i < 5; i++)
	{
		sum += num[i];
	}
	avg = (float)sum / 5;


	max = min = num[0];
	for (i = 0; i < 5; i++)
	{
		if (max < num[i]) //최대 값
			max = num[i];

		if (min > num[i]) //최소 값
			min = num[i];
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d, ",num[i]);
	}
	printf("\n");
	printf("합: %d, 평균: %lf\n", sum, avg);
	printf("최대값: %d, 최소값: %d\n", max, min);

	return 0;
}