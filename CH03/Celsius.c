#include <stdio.h>
#include <ctype.h>

int main(){

	char celsius;
	int tmp, out;

	printf("È­¾¾ÀÌ¸é F, ¼·¾¾ÀÌ¸é C ÀÔ·Â : ");
	scanf("%c", &celsius);
	celsius = toupper(celsius);

	printf("%s ¿Âµµ ? ", celsius=='F' ? "È­¾¾" : "¼·¾¾" );
	scanf("%d", &tmp);

	out = celsius == 'F' ? (tmp - 32)/1.8 : (tmp * 1.8) + 32;

	printf("\n%s¸¦ %s·Î º¯È¯: %d \n",
		celsius == 'F' ? "È­¾¾" : "½ç¾¾",
		celsius != 'F' ? "È­¾¾" : "½ç¾¾",
		//out == 'F' ? tmp : out, ÀÌ¹Ì outÀ¸·Î Á¤ÇØÁø °ªÀÌ Á¤È®ÇÑ °è»êÀÓ.
		out);

	return 0;
}