#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = (rand() % 100) + 1;
    int guess = 0;
    int guessCount = 0;
    char name[50];

    printf("What is your name: ");
    scanf(" %49[^\n]", name);


    do
    {
        printf("Enter Guess: ");
        scanf("%d", &guess);
        guessCount++;

        if (guess < number)
            printf("Too low!\n");
        else if (guess > number)
            printf("Too high!\n");
        else
            printf("That's correct!\n");

    } while (guess != number);

    printf("final guessCount = %d\n", guessCount);

    if (guessCount > 7)
        printf("Yikes %s, you've guessed more than seven times.\n", name);
    else if (guessCount < 7)
        printf("Great job %s! You guessed it under seven tries!\n", name);
    else
        printf("Nice %s! You guessed it in exactly 7 tries!\n", name);

    return 0;
}

