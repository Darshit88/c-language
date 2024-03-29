#include <stdio.h>

int div(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (div(n))
        printf("Number is divisible.\n");
    else
        printf("Number is not divisible.\n");

    return 0;
}
