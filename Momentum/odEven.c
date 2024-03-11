//Write a Program to check whether a number is even or odd using the ternary operator.

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter an no.: ");
    scanf("%d", &n);
    
    (n % 2 == 0) ? printf("\nThis no. is Even. %d", n) : printf("\nThis no. is Odd. %d", n);
    
    return 0;
}
