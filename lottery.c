
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userNumber, winningNumber;
    char again;

    srand(time(0));

    printf("\n==============================\n");
    printf("      MINI LOTTERY GAME       \n");
    printf("==============================\n");

    do
    {
        printf("\nEnter your lucky number (1-10): ");
        scanf("%d", &userNumber);

        if (userNumber < 1 || userNumber > 10)
        {
            printf("Invalid number! Try again.\n");
            continue;
        }

        winningNumber = rand() % 10 + 1;

        printf("\nYour Number: %d", userNumber);
        printf("\nWinning Number: %d\n", winningNumber);

        if (userNumber == winningNumber)
        {
            printf("\nCongratulations! You Won 100 Points!\n");
        }
        else
        {
            printf("\nBetter Luck Next Time!\n");
        }

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nThank You For Playing!\n");

    return 0;
}
