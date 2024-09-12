
#include <stdio.h>
#include <conio.h>

#define MAX 15

int main()
{
	// Beautiful Colors!

	clrscr();
	textcolor(WHITE);
	textbackground(BLUE);
	clrscr();

	// Declaring Variables:

	char user_name[MAX];
	char user_age[MAX];
	char user_gender[MAX];

	// User Input Section:

	printf("What's your name :) ?: ");
	fgets(user_name, MAX, stdin);

	printf("What's your age?: ");
	fgets(user_age, MAX, stdin);

	printf("What's your gender?: ");
	fgets(user_gender, MAX, stdin);

	printf("\n");

	printf("Your Name is: %s", user_name);
	printf("Your Age is: %s", user_age);
	printf("Your Gender is: %s", user_gender);

	getch();
	return 0;


}