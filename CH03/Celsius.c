#include <stdio.h>
#include <ctype.h>

int main(){

	char celsius;
	int tmp, out;

	printf("ȭ���̸� F, �����̸� C �Է� : ");
	scanf("%c", &celsius);
	celsius = toupper(celsius);

	printf("%s �µ� ? ", celsius=='F' ? "ȭ��" : "����" );
	scanf("%d", &tmp);

	out = celsius == 'F' ? (tmp - 32)/1.8 : (tmp * 1.8) + 32;

	printf("\n%s�� %s�� ��ȯ: %d \n",
		celsius == 'F' ? "ȭ��" : "�羾",
		celsius != 'F' ? "ȭ��" : "�羾",
		//out == 'F' ? tmp : out, �̹� out���� ������ ���� ��Ȯ�� �����.
		out);

	return 0;
}