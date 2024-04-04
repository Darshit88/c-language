#include <stdio.h>

void revers(int *a, int s)
{
    int *start = a;
    int *end = a + s - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    int size;

    printf(" Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    printf("\n Enter array elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    revers(arr, size);

    printf("\n Reversed array elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
