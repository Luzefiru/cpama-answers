/* program that lets the user play a game of "Craps" */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define DICE_MAX 6

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0, loses = 0;
    bool keep_playing = 1;
    char inp;

    srand(time(NULL)); // generates a random seed based on system clock
    
    while (keep_playing)
    {
        /* plays a game and adds to the score depending on result value */
        if (play_game())
            wins++;
        else
            loses++;

        /* prompts the player to play again, Y proceeds, anything not whitespace quits the loop */
        printf("Play again? (Y/N) ");
        scanf(" %c", &inp);
        keep_playing = (toupper(inp) == 'Y') ? 1 : 0;
    }

    /* displays the result when the user stops playing*/
    printf("\nWins: %d\t Loses: %d", wins, loses);

    exit(EXIT_SUCCESS);
}

/**
 * @brief rolls two dice
 * 
 * @return {int} : the sum of both dice
 */
int roll_dice(void)
{   
    int dice1 = rand() % DICE_MAX;
    int dice2 = rand() % DICE_MAX;

    return dice1 + dice2;
}

/**
 * @brief plays a game of craps until the player wins or loses
 * 
 * @return {bool} : 1 if the player wins, 0 if the player loses
 */
bool play_game(void)
{
    int roll = roll_dice(), point;
    printf("You rolled %d\n", roll);

    /* first roll, sets the "point" if the roll does not win/lose */
    switch (roll)
    {
        case 7: case 11:
            printf("You win!\n\n");
            return true;

        case 2: case 3: case 12:
            printf("You lose!\n\n");
            return false;

        default:
            point = roll;
            printf("*** Your point is %d\n", point);
    }

    /* subsequent rolls until win or lose */
    for (;;)
    {
        printf("You rolled %d\n", (roll = roll_dice()));

        if (roll == 7)
        {
            printf("You lose!\n\n");
            return false;
        }
        else if (roll == point)
        {
            printf("You win!\n\n");
            return true;
        }
        else continue;
    }

    exit(EXIT_FAILURE); // this should NEVER be reached, exit program if it does
}