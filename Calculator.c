#include <stdio.h>
#include <stdbool.h>

#include "Math.h"
#include "Functions.h"


int main() {
	introduction();

	int a, b;
	char todo;

	bool is_running = true;
	
	int user_command;
	
	while (user_command != 's') {
		user_command = start_program();
		
		if (user_command == 'e') {
			return 0;
		}
	}
	

	while (is_running) {
		printf("Enter a first number:\n");
		scanf("%d", &a);
		printf("What you wanna do with this number(+, -, *, /)?\n");
		todo = getchar();
		todo = getchar();
		printf("Enter a second number:\n");
		scanf("%d", &b);
		
		calc(a, b, todo);
		
		printf("Continue(Y/N)?\n");
		
		char continue_or_not;
		
		continue_or_not = getchar();
		continue_or_not = getchar();
		if (continue_or_not == 'N') {break;}
	};
	
	return 0;
}