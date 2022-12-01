#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    int num, choice;
    static int pscores = 0, cscores = 0;
    char name[30];
    printf("\t****Rock, Paper and Scissor Game****\n\n");

    printf("Enter Your Name : ");
    scanf("%s", &name);
    printf("Welcome %s (*_*)\n\n", name);

    for (int i = 0; i < 3; i++)
    {
        printf("Choose:\n'1' for Rock\n'2' for Paper\n'3' for Scissor\n Enter : ");
        scanf("%d", &num);
        choice = randomnumber(3);
        if (choice == 0)
        {
            printf("Computer chose Rock\n");
            if (num == 1)
            {
                printf("Match Draw!!!\n");
            }
            if (num == 2)
            {
                printf("You Won!!!\n");
                pscores++;
            }
            if (num == 3)
            {
                printf("Computer Won!!!\n");
                cscores++;
            }
        }

        else if (choice == 1)
        {
            printf("Computer chose Paper\n");
            if (num == 1)
            {
                printf("Computer Won!!!\n");
                cscores++;
            }
            if (num == 2)
            {
                printf("Match Draw!!!\n");
            }
            if (num == 3)
            {
                printf("You Won!!!\n");
                pscores++;
            }
        }

        else if (choice == 2)
        {
            printf("Computer chose Scissor\n");
            if (num == 1)
            {
                printf("You Won!!!\n");
                pscores++;
            }
            if (num == 2)
            {
                printf("You Lost!!!\n");
                cscores++;
            }
            if (num == 3)
            {
                printf("Match Draw!!!\n");
            }
        }

        else
        {
            printf("Please enter the appropriate value.\n");
        }
    }

    if (pscores > cscores)
    {
        printf("%s have won the game!!!\n", name);
        printf("Scores are %d\n", pscores);
    }

    if (cscores > pscores)
    {
        printf("Computer have won the game!!!\n");
        printf("Scores are %d\n", cscores);
    }

    if (cscores == pscores)
    {
        printf("Game Draw!!!\n");
    }

    return 0;
}