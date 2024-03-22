#include <stdio.h>

int main()
{
    int s, i;
    printf("Enter array size: ");
    scanf("%d", &s);
    int a[s];

    printf("Enter array element:\n");
    for (i = 0; i < s; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("The square is: ");
    for (i = 0; i < s; i++)
    {
        printf("%d", a[i] * a[i]);
        if (i < s - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
