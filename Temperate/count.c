// Write a Program to count the total number of digits in a number.
#include <stdio.h>
void main()
{
    int no, count = 0, r;
    printf("\n Enter the no.:");
    scanf("%d", &no);
    while (no > 0)
    {
        r=r%10;
        count++;
        no=no/10;
    }
    printf("\n No of digits are %d",count);
}