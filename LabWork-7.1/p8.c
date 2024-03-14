#include <stdio.h>

int main()
{
    int i, j, k = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}
