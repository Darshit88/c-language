#include <stdio.h>

int main()
{
    int s, a[s], f = 0;

    printf("Enter the array's size: ");
    scanf("%d", &s);

    printf("Enter array's elements:\n");
    for (int i = 0; i < s; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Negative elements from the Array: ");

    for (int i = 0; i < s; i++)
    {
        if (a[i] < 0)
        {
            if (f)
                printf(", ");
            printf("%d", a[i]);
            f = 1;
        }
    }

    printf("\n");

    return 0;
}
