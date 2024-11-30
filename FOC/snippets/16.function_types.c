#include <stdio.h>

// Parameter passing and return values.

// Function declarations
int add(int, int);
float average(int, int);
double power(int, int);
char grade(int);

int main()
{
    int a = 5, b = 10;

    printf("a: %d, b: %d\n", a, b);

    // Function calls
    int sum = add(a, b);
    printf("Sum: %d\n", sum);

    float avg = average(a, b);
    printf("Average: %.2f\n", avg);

    double pow = power(a, b);  // five raised to the power of ten
    printf("Power: %.2f\n", pow); // 9765625.00

    int marks = 85;
    char g = grade(marks);
    printf("Grade for %d marks: %c\n", marks, g);

    // Calling functions in a loop
    int arr[] = {15, 25, 35, 45, 55};
    int sumOfArray = 0;
    for(int index = 0; index < 5; index++)
    {
        sumOfArray = add(arr[index], sumOfArray);
    }
    printf("Sum of array: %d\n", sumOfArray);

    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

float average(int a, int b)
{
    return (a + b) / 2.0;
}

double power(int base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

char grade(int marks)
{
    // approach 1
    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }
    else if (marks >= 70)
    {
        return 'C';
    }
    else if (marks >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }

    // approach 2
    switch (marks / 10)
    {    
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }
}