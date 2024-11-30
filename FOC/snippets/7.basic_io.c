#include<stdio.h>

void takeMultipleInputs();

int main()
{
    takeMultipleInputs();
    return 0;

    int a;
    // printf() displays the formatted output
    printf("Enter a number: ");

    // scanf() reads the formatted input and stores them into the address of the variable
    scanf("%d", &a);

    // printf() displays the formatted output using format specifiers (placeholders)
    printf("You entered (octal): %o\n", a);
    printf("You entered (int with 5 zeros): %05d\n", a);
    printf("You entered (int with space of 5): %5d\n", a);

    return 0;
}

void takeMultipleInputs()
{
    int a, b;

    // printf() displays the formatted output
    printf("Enter two numbers: ");

    // scanf() reads the formatted input and stores them into the address of the variable
    scanf("%d %d", &a, &b);

    // printf() displays the formatted output using format specifiers (placeholders)
    printf("You entered: %d and %d\n", a, b);

    // this is where the fun begins ;)
    char c;
    printf("Enter a character: ");
    // scanf("%c", &c);
    scanf("%s", &c);
    printf("a: %d,\t b: %d,\t c: %c\n", a, b, c);
}


// common format specifiers
/*
    %d: integer
    %f: float
    %c: character
    %s: string
    %lf: double
    %x: hexadecimal
    %o: octal
*/

// common escape sequences
/*
    \n: newline
    \t: tab
    \': single quote
    \": double quote
    \\: backslash
*/