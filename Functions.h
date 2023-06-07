#include <stdio.h>


void introduction() { // just introduction
    printf("Hello! This is my test project called \"CCalculator\" which i made to practice a programming language C.\n");
	printf("To start you can type \"s\" - /start, \"h\" - /help or \"e\" - /exit\n");
}

void help() { // maybe one day here gonna be more commands :(
    printf("There a command you can use: \n's' - start \n'h' - help \n'e' - exit\n");
}

char start_program() { // used only in start of the program
    printf("What you wanna do (s, h, e)?\n");
	
	char first_command = getchar();
	
	switch (first_command) {
		case 's':
			return 's';

		case 'h':
			help();
			return 'h';

		case 'e':
			return 'e'; // we return a value to close main thread, not only this function.

		default:
			printf("You enter a wrong command, try again\n");
			return 'd';
	}
}