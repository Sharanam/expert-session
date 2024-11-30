// basic data types in C:
/**
 * int: 4 bytes, -2147483648 to 2147483647
 * float: 4 bytes, 1.23, 1.23f
 * double: 8 bytes, 1.23, 1.23f, 1.23l
 * char: 1 byte, 'A', 'a', '1'
 */

#include <stdio.h>

void useVariables();

int main()
{
    const int a = 15;
    int marks[] = {
        23,
        34,
        46,
    };
    float b = 5.5;
    char c = 'k';
    char c[a];
    double d = 5.5555;
    short int e = 5;
    long int f = 5;
    long double g = 5.5555;
    unsigned int h = 5;
    signed int i = 5;
    long long int j = 5;
    unsigned long int k = 5;
    signed long int l = 5;
    unsigned long long int m = 5;
    signed long long int n = 5;
    char o[] = "Hello, World!";

    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("char: %c\n", c);
    printf("double: %lf\n", d);
    printf("short int: %d\n", e);
    printf("long int: %ld\n", f);
    printf("long double: %Lf\n", g);
    printf("unsigned int: %u\n", h);
    printf("signed int: %d\n", i);
    printf("long long int: %lld\n", j);
    printf("unsigned long int: %lu\n", k);
    printf("signed long int: %ld\n", l);
    printf("unsigned long long int: %llu\n", m);
    printf("signed long long int: %lld\n", n);
    printf("char[]: %s\n", o);

    return 0;
}

void useVariables()
{
    int initial = 5;    // Declaring and initializing variable.
    initial = 2;        // Reassigning value to first variable.
    int declared;       // Only declaring variable.
    declared = 5;       // Assigning value to unasigned variable.
    declared = 5 + 5;   // Assigning value of an expression to a variable.
    declared = 5;       // Reassigning value to a variable.
    declared = initial; // Assigning value of another variable to a variable.
    int a = 5, b = 5;   // Declaring and initializing multiple variables.
    int c = a + b;      // Assigning value of an expression to a variable.
}

void swapVariables()
{
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b); // Output: a = 5, b = 10

    // Swap logic using a temporary variable
    {
        /*
        a = 5, b =10; temp = a = 5;
        */
        int temp = 5;
        a = 10; // a =10
        b = 5; // b = 5 
    }

    printf("After swapping: a = %d, b = %d\n", a, b); // Output: a = 10, b = 5
}