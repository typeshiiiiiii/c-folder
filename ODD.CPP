#include <stdio.h>
#include <conio.h>

int main() {

    clrscr();
    int num_repetitions;

    printf("Enter the number of times to repeat 'Oh My Skibidi': ");
    scanf("%d", &num_repetitions);

    // Set the background color to blue and text color to white
    printf("\033[44m"); // Set background color to blue
    printf("\033[37m"); // Set text color to white

    for (int i = 0; i < num_repetitions; i++) {
	printf("Oh My Skibidi\n");
    }

    // Reset the colors to default
    printf("\033[0m");
    getch();w
    return 0;
}