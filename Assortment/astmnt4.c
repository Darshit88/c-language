#include <stdio.h>

int main()
{
    int r, c, i, j, row_number, col_number, col_sum = 0, row_sum = 0;
    printf("Enter row size: ");
    scanf("%d", &r);
    printf("Enter column size: ");
    scanf("%d", &c);

    int a[r][c];
    printf("Enter array's elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter row number: ");
    scanf("%d", &row_number);
    printf("Elements of row %d: ", row_number);
    for (j = 0; j < c; j++)
    {
        printf("%d", a[row_number][j]);
        row_sum += a[row_number][j];
        if (j < c - 1)
            printf(", ");
    }
    printf("\nThe sum of row: %d\n", row_sum);
    printf("\nEnter column number: ");
    scanf("%d", &col_number);
    printf("Elements of column %d: ", col_number);
    for (i = 0; i < r; i++)
    {
        printf("%d", a[i][col_number]);
        col_sum += a[i][col_number];
        if (i < r - 1)
            printf(", ");
    }
    printf("\nThe sum of column: %d\n", col_sum);
    return 0;
}
