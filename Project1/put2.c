// put2.c
#include <stdio.h>

#define MESSAGE "Hello, World" // �����ݷ� �Ⱦ�
int main(void) {
	//1. puts
	puts("Using puts():");
	puts(MESSAGE); //puts()����Ҷ� �ڵ��ٹٲ޵�
	
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