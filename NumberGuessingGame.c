// program user guess the random correct number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>
// initialize default value for max number
// menu 1. play game 2. change max number 3. quit

// option 1
// loop until input == q
    // if too high then out high
    // if too low then out low
void play_game(int max_num) {
    time_t t;
    srand((unsigned)time(&t));
    int rand_value = rand() % max_num;
    printf("Random: %d\n", rand_value);

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

// option 3
// thank you for playing game
// return 0

int main() {
    
    return EXIT_SUCCESS;
}