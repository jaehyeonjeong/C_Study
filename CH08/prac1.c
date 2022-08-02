#include <stdio.h>
#include <string.h>

int main()
{
	char name[20] = "";
	char address[50] = "";

	char tmp[100];
	int count, i;

	do
	{
		count = 0;
		printf("己疙 ? ");
		gets(tmp);
	} while (strlen(tmp) >= sizeof(name));

	strcpy(name, tmp);

	do
	{
		count = 1;
		printf("林家 ? ");
		gets(tmp);
	} while (strlen(tmp) >= sizeof(address));

	strcpy(address, tmp);

	printf("\n己疙: %s, 林家: %s \n", name, address);
	return 0;
}