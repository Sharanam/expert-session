// scope and life of variables

#include <stdio.h>

void updateLocalVariables();
void updateGlobalVariables();

int global = 1; // Global variable

int main()
{
    int local = 5; // Local variable
    updateLocalVariables();
    printf("Local variable: %d\n", local); // Output: 5
    printf("Global variable: %d\n", global); // Output: 1

    updateGlobalVariables();
    printf("Local variable: %d\n", local); // Output: 5
    printf("Global variable: %d\n", global); // Output: 15
    return 0;
}

void updateLocalVariables()
{
    int local = 10; // Local variable
    int global = 10; // Declaring a new local variable with the same name as the global variable
    printf("Local variable: %d\n", local);
    printf("Global variable: %d\n", global); // Local variable
}

void updateGlobalVariables()
{
    int local = 15; // Local variable
    global = 15; // Updating global variable's value
    printf("Local variable: %d\n", local);
    printf("Global variable: %d\n", global); // Global variable
}

void lifeOfVariables()
{
    int local = 5; // Local variable
    {
        int block = 10; // Block variable
        printf("Block variable: %d\n", block);
    }
    printf("Local variable: %d\n", local);
    // printf("Block variable: %d\n", block); // Error: block undeclared
}