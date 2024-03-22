
#include<stdio.h>
void main()
{
    int r , c , i , j;
    printf("enter r size:");
    scanf("%d",&r);
    printf("enter c size:");
    scanf("%d",&c);
    
    int a[r][c];
    printf("enter array elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    int largest = a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]>largest)
            {
                largest = a[i][j];
            }
        }
    }
    printf("largest elements %d",largest);
}