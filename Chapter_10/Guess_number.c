/* Ask user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void initialize_number_generator(void);
void read_guesses(int secret_number);
int new_secret_number(void);

int main (void)
{
    char command;
    int secret_number;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
    initialize_number_generator();

    do {
        secret_number = new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses(secret_number);
        printf("Play again? (Y/N)\n");
        scanf("%c", &command);
    } while (command == 'Y' || command == 'y');

    return 0;
}

void initialize_number_generator(void)
{
    srand((unsigned) time(NULL));
}

int new_secret_number(void)
{
    return rand() % MAX_NUMBER + 1;
}

void read_guesses(int secret_number)
{
    int guess, counter;

    while (1) {
        counter++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess == secret_number) {
            printf("You won in %d guesses!\n", counter);
            return;
        } else if (guess < secret_number)
            printf("Too low; try again.\n");
        else
            printf("Too high; try again\n");
    }
}