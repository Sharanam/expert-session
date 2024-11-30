#include <stdio.h>

void loopingStatements();
void branchingStatements();

int main()
{
    loopingStatements();
    branchingStatements();
    return 0;
}

void loopingStatements()
{
    // for loop
    for (int i = 0; i < 5; i++)
    {
        printf("i: %d\n", i);
    }

    // while loop
    int j = 0;
    while (j < 5)
    {
        printf("j: %d\n", j);
        j++;
    }

    // do-while loop
    int k = 0;
    do
    {
        printf("k: %d\n", k);
        k++;
    } while (k < 5);
}

void branchingStatements()
{
step1:
    // break statement: It is used to terminate the loop or switch statement.
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("i: %d\n", i);
    }

    // continue statement: It skips the current iteration and continues with the next iteration.
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("i: %d\n", i);
    }

    // goto statement: Don't use it in your code as it makes the code unreadable and difficult to maintain.
    int i = 0;
loop:
    printf("i: %d\n", i);
    i++;
    if (i < 5)
    {
        goto loop; // jump to loop
    }
}