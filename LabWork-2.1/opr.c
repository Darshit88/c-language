// Write a Program to perform all arithmetic operators such as +, -, *, / and %

#include <stdio.h>
int main()
{
    int a, b;

    printf("\n Enter the value of a :");
    scanf("%d", &a);

    printf("\n Enter the value of b :");
    scanf("%d", &b);

    printf("\n Addition of %d and %d is : %d", a, b, a + b);

    printf("\n Subtraction of %d and %d is : %d", a, b, a - b);

    printf("\n Multiplication of %d and %d is : %d", a, b, a * b);

    printf("\n Division of %d and %d is : %d", a, b, a / b);

    printf("\n Moduls of %d and %d is : %d", a, b, a % b);

    printf("\n%d + %d = %d", a, b, a + b);
    printf("\n%d - %d = %d", a, b, a - b);
    printf("\n%d * %d = %d", a, b, a * b);
    printf("\n%d / %d = %d", a, b, a / b);
    printf("\n%d %% %d = %d", a, b, a % b);
}
