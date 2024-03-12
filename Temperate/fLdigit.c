// Write a Program to find the sum of the first and the last digit of a number.
#include <stdio.h>

int main()
{
    int n, s = 0, fd, ld;
    printf("Enter Any Number:");
    scanf("%d", &n);
    ld = n % 10;
    fd = n;
    while (n >= 10)
    {
        n = n / 10;
    }
    fd = n;
    s = fd + ld;
    printf("\n Sum Of First And Last Digit: %d", s);

    return 0;
}
