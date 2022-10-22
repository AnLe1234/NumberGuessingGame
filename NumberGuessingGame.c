// program user guess the random correct number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>

// option 1
// loop until input == q
    // if too high then out high
    // if too low then out low
void play_game(int max_num) {
    time_t t;
    srand((unsigned)time(&t));
    int rand_value = rand() % max_num;

    char input[10];

    do {
        // user input
        printf("Enter value: ");
        scanf("%s", &input);
        // compare if it is q
        if (strcmp(input,"q") == 0) {
            break;
        } else if (atoi(input) > rand_value) {
            // if too high then out high
            printf("Too high!\n");
        } else if (atoi(input) < rand_value) {
            // if too low then out low
            printf("Too low!\n");
        } else {
            printf("Congratulation! Your guess is correct\n\n");
            break;
        }
        while(getchar() != '\n');
    } while (1);
}
// option 2
// change default value
int value_change() {
    int input;
    do {
        printf("Enter max value: ");
        scanf("%d", &input);
        if (input < 0 || input > INT_MAX) {
            printf("Invalid input!\n");
        } else {
            break;
        }
        while(getchar() != '\n');
    } while (1);
    return input;
}



int main() {
    // initialize default value for max number
    // menu 1. play game 2. change max number 3. quit
    int max_num = 10;
    int option;
    do {
        printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n: ");
        scanf("%d", &option);
        if (option == 1) {
            play_game(max_num);
        } else if (option == 2) {
            // option 2
            // change default value
            max_num = value_change(max_num);
        }
        while(getchar() != '\n');
    } while (option != 3);

    // option 3
    // thank you for playing game
    printf("Thank you for playing the game!\n");
    return EXIT_SUCCESS;
}