#include <stdio.h>

int main()
{
    int size_A, size_B, i;
    printf("Enter array A size: ");
    scanf("%d", &size_A);

    int array_A[size_A];

    printf("Enter array A elements:\n");
    for (i = 0; i < size_A; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array_A[i]);
    }

    printf("Enter array B size: ");
    scanf("%d", &size_B);
    int array_B[size_B];

    printf("Enter array B elements:\n");
    for (i = 0; i < size_B; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &array_B[i]);
    }

    int size_C = size_A + size_B, array_C[size_C], index_C = 0;

    for (i = 0; i < size_A; i++)
    {
        array_C[index_C++] = array_A[i];
    }
    for (i = 0; i < size_B; i++)
    {
        array_C[index_C++] = array_B[i];
    }

    printf("Array C is: ");
    for (i = 0; i < size_C; i++)
    {
        printf("%d", array_C[i]);
        if (i < size_C - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
