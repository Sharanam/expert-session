#include <stdio.h>

// common operators
/*
    Arithmetic Operators: +, -, *, /, %, ++, --
    Relational Operators: ==, !=, >, <, >=, <=
    Logical Operators: &&, ||, !
    Bitwise Operators: &, |, ^, ~, <<, >>
    Assignment Operators: =, +=, -=, *=, /=, %=, <<=, >>=, &=, |=, ^=
    Conditional Operator: ?:
    Cast Operator: (type)
    Comma Operator: ,
    Address Operator: &
    Dereference Operator: * (also known as Indirection Operator or Value at Address Operator)
*/

void arithmeticOperators(int a, int b);
void relationalOperators(int a, int b);
void logicalOperators(int a, int b);
void bitwiseOperators(int a, int b);
void assignmentOperators(int a, int b);
void ternaryOperator(int a, int b);

// operators
int main()
{
    int a = 5, b = 10;

    printf("Arithmetic Operators\n");
    arithmeticOperators(a, b);

    printf("\nRelational Operators\n");
    relationalOperators(a, b);

    printf("\nLogical Operators\n");
    logicalOperators(a, b);

    printf("\nBitwise Operators\n");
    bitwiseOperators(a, b);

    printf("\nAssignment Operators\n");
    assignmentOperators(a, b);

    return 0;
}

void arithmeticOperators(int a, int b)
{
    printf("Addition: %d\n", a + b);

    printf("Subtraction: %d\n", a - b);

    printf("Multiplication: %d\n", a * b);

    printf("Division: %d\n", a / b);

    printf("Modulus: %d\n", a % b);

    printf("Increment: %d\n", a++);

    printf("Decrement: %d\n", a--);

    printf("Increment: %d\n", ++a);

    printf("Decrement: %d\n", --a);

    printf("Unary Minus: %d\n", -a);

    printf("Unary Plus: %d\n", +a);
}

void relationalOperators(int a, int b)
{
    printf("Equal to: %d\n", a == b);

    printf("Not Equal to: %d\n", a != b);

    printf("Greater than: %d\n", a > b);

    printf("Less than: %d\n", a < b);

    printf("Greater than or Equal to: %d\n", a >= b);

    printf("Less than or Equal to: %d\n", a <= b);
}

void logicalOperators(int a, int b)
{
    printf("Logical AND: %d\n", a && b);

    printf("Logical OR: %d\n", a || b);

    printf("Logical NOT: %d\n", !a);
}

void bitwiseOperators(int a, int b)
{
    // 32 16 8 4 2 1 => 1 + 0 + 4 
    printf("Bitwise AND: %d\n", a & b);
    // 5 and 10; 0101 and 1010; 0000 = 0
    // 7 and 11; 0111 and 1011; 0011 = 3

    printf("Bitwise OR: %d\n", a | b);
    // 5 and 10; 0101 and 1010; 1111 = 15

    printf("Bitwise XOR: %d\n", a ^ b);
    // 5 and 10; 0101 and 1010; 1111 = 15
    // 5 and 11; 0101 and 1011; 1110 = 14

    printf("Bitwise NOT: %d\n", ~a);
    // 5; 0101; 1010 = 10

    printf("Left Shift: %d\n", a << 1);
    // 5; 0101; 1010 = 10

    printf("Right Shift: %d\n", a >> 1);
    // 5; 0101; 0010 = 2
}

void assignmentOperators(int a, int b)
{
    printf("Assignment: %d\n", a = b); // a = 5, b = 10
    // a = b; // a = 10, b = 10

    printf("Add and Assign: %d\n", a += b); // a = 10, b = 10
    // a += b; // a = 20, b = 10

    printf("Subtract and Assign: %d\n", a -= b); // a = 20, b = 10
    // a -= b; // a = 10, b = 10

    printf("Multiply and Assign: %d\n", a *= b); // a = 10, b = 10
    // a *= b; // a = 100, b = 10

    printf("Divide and Assign: %d\n", a /= b); // a = 100, b = 10
    // a /= b; // a = 10, b = 10

    printf("Modulus and Assign: %d\n", a %= b); // a = 10, b = 10
    // a %= b; // a = 0, b = 10

    // re-assiging a and b to 5 and 10
    a = 5;
    b = 10;

    printf("Right Shift and Assign: %d\n", a >>= 1); // a = 5, b = 10
    // a >>= 1; // a = 2, b = 10

    printf("Left Shift and Assign: %d\n", a <<= 1); // a = 2, b = 10
    // a <<= 1; // a = 4, b = 10

    printf("Bitwise AND and Assign: %d\n", a &= b); // a = 4, b = 10
    // a &= b; // a = 0, b = 10

    printf("Bitwise OR and Assign: %d\n", a |= b); // a = 0, b = 10
    // a |= b; // a = 10, b = 10

    printf("Bitwise XOR and Assign: %d\n", a ^= b); // a = 10, b = 10
    // a ^= b; // a = 0, b = 10
}

void ternaryOperator(int a, int b)
{
    int max = a > b ? a : b;
    // if a is greater than b, max = a, else max = b
    printf("Ternary Operator: %d\n", max);
}

void commaOperator(int a, int b)
{
    int a=1,b=1;
    // commonly used in for loop
    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i: %d, j: %d\n", i, j);
    }
}

void castOperator(int a, int b)
{
    float c = (float)a / b;
    // casting a to float and then dividing by b
    printf("Cast Operator: %f\n", c);

    int d = (int)c; // truncating the decimal part
    printf("Cast Operator: %d\n", d);
}

void addressOperator(int a)
{
    int *b = &a;
    // storing the address of a in b
    printf("Address Operator: %p\n", b);

    printf("Dereference Operator: %d\n", *b);
    // accessing the value at the address stored in b
}