#include<stdio.h>

int main()
{
    int a;

    // printf() displays the formatted output
    printf("Enter a number: ");

    // scanf() reads the formatted input and stores them into the address of the variable
    scanf("%d", &a);

    // printf() displays the formatted output using format specifiers (placeholders)
    printf("You entered: %d\n", a);

    return 0;
}
