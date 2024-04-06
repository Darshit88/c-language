// Print below pattern using nested for loop in C language:
#include <stdio.h>
int main()
{
    int r = 5,i,j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",  i  * i);
        }
        printf("\n");
    }

    return 0;
}
