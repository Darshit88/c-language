#include <stdio.h>

int main()
{
    int s, i, j;
    printf("Enter array size: ");
    scanf("%d", &s);
    int a[s][s], transpose[s][s];
    printf("Enter array's elements:\n");
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    printf("The transpose matrix is:\n");
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
