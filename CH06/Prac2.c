#include <stdio.h>

int main()
{
	int num, i, prime;

	printf("Enter the number ? ");
	scanf("%d", &num);

	prime = 1;
	for (i = 2; i <= num / 2; i++) //12, 13
	{
		if (num % i == 0)
			prime++;
		else
			prime = prime;
	}
	if (prime == 1)
		printf("The number is prime. \n");
	else
		printf("The number is not prime. \n");
	return 0;
}