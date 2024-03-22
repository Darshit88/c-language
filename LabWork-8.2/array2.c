#include <stdio.h>

int main()
{
    int fy, sy, i, year, count = 0;

    printf("Enter the first number: ");
    scanf("%d", &fy);
    printf("Enter the second number: ");
    scanf("%d", &sy);

    int ly[sy - fy + 1];
    for (year = fy; year <= sy; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            ly[count] = year;
            count++;
        }
    }

    printf("The array is: ");
    for (i = 0; i < count; i++)
    {
        printf("%d", ly[i]);
        if (i < count - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
