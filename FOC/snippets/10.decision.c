#include <stdio.h>

void decisionMakingStatements();

int main()
{
    decisionMakingStatements();
    return 0;
}
void decisionMakingStatements()
{
    // if statement
    int a = 5;
    if (a > 0)
    {
        printf("a is positive\n");
    }

    // if-else statement
    if (a > 0)
    {
        printf("a is positive\n");
    }
    else
    {
        printf("a is negative\n");
    }

    // nested if-else statement
    if (a > 0)
    {
        printf("a is positive\n");
    }
    else if (a < 0)
    {
        printf("a is negative\n");
    }
    else
    {
        printf("a is zero\n");
    }

    // else-if ladder
    if (a > 0)
    {
        printf("a is positive\n");
    }
    else if (a < 0)
    {
        printf("a is negative\n");
    }
    else if (a == 0)
    {
        printf("a is zero\n");
    }
    else
    {
        printf("a is not a number\n");
    }

    // switch statement
    switch (a)
    {
        case 1:
            printf("a is 1\n");
            break;
        case 2:
            printf("a is 2\n");
            break;
        case 3:
            printf("a is 3\n");
            break;
        default:
            printf("a is not 1, 2, or 3\n");
    }
}