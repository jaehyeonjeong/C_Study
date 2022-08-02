#include <stdio.h>

int main()
{
	int hour;
	int min;

	scanf("%d%*c", &hour);
	scanf("%d%*c", &min);

	int second_h;
	int second_m;

	second_h = hour * 60 * 60;
	second_m = min * 60;

	printf("%d시간 %d분은 %d초입니다.\n",
		hour, min, second_h + second_m);

	return 0;
}