//put.c
#include <stdio.h>

int main(void) {
	char* name = "Jin";

	//문자출력
	putc(name[0], stdout);
	putchar(10);
	putchar(name[0]);//=> putc(name, stdout);

	putchar(10);
	putchar(65);
	putchar(97);
	putchar(10);

	//문자열 출력
	puts(name);
	//puts(65);
	//puts(97);
	//puts(10);

	printf(name);

	return 0;
}