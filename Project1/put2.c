// put2.c
#include <stdio.h>

#define MESSAGE "Hello, World" // 세미콜론 안씀
int main(void) {
	//1. puts
	puts("Using puts():");
	puts(MESSAGE); //puts()사용할때 자동줄바꿈됨
	
	//2. putchar
	puts("\nUsing putchar():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putchar(MESSAGE[i]);
	}
	printf("\n");

	//3. putc
	puts("\nUsing putc():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i], stdout);
	}

	putchar('\n');

	return 0;
}