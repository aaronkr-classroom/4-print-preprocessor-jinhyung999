//rps.c
//Rock-paper-Scissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h>// srand()

//�������
#define ROCK 1
#define PAPER 2
#define	SCISSORS 3

//��� �Լ� ����
#define WIN printf("You win!\n")
#define LOSE printf("You lose �Ф�\n")
#define TIE printf("IT's a tie\n")

//�Լ� ���� �����ϱ�
void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void) {
	int user_choice, comp_choice;

	srand(time(0));

	printf("Welcome ot RPS!");
	printf("choose your move:\n");
	printf("1-ROCK\n");
	printf("2-PAPER\n");
	printf("3-SCISSORS\n");

	//������� ���� ã��
	printf("Choice:");
	scanf_s("%d", &user_choice);
	
	//com choice
	comp_choice = (rand() % 3 + 1);// %3>>0~2 3���γ��� ������

	//�������
	printf("Your choice: ");
	print_choice(user_choice);
	printf("Com choice: ");
	print_choice(comp_choice);

	play_game(user_choice, comp_choice);

	return 0;
}

//�Լ� ����
void play_game(int user_choice, int comp_choice) {
	int result;
	result = user_choice - comp_choice;
	if (user_choice == comp_choice) {
		TIE;
	}
	else if (result=1&&-2){
		/*(user_choice == ROCK && comp_choice == SCISSORS) ||
		(user_choice == PAPER && comp_choice == ROCK) ||
		(user_choice == SCISSORS && comp_choice == PAPER)
		) {*/
		WIN;
	}
	else if(result=-1&&2){
		LOSE;
	}
}

void print_choice(int choice) {
	if (choice == ROCK) {//choice == 1
		printf("Rock\n");
	}
	else if(choice == PAPER) {//choice == 2
		printf("Paper\n");
	}
	else if(choice == SCISSORS) {//choice == 2
		printf("Scissors\n");
	}
	else
	{
		printf("Error: Incorrect choice!\n");
		exit(1);
	}
}
