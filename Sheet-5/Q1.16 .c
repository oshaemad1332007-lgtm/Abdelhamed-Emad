#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = rand() % 100 + 1;
    int att = 0;
    printf("Welcome to the Guessing Game!\n");
    while (1)
    {
        int ges;
        printf("Enter your guess (between 1 and 100):\n");
        scanf("%d", &ges);

        if (ges < n)
        {
            printf("Too low. Try again.\n");
            att++;
        }

        else if (ges > n)
        {
            printf("Too high. Try again.\n");
            att++;
        }

        else
        {
            att++;
            printf("Congratulations! You guessed the correct number (%d) in %d attempts.\n", ges, att);

            break;
        }
    }

    return 0;
}
