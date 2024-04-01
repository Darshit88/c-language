#include<stdio.h>
void calc()
{
int a,b,ch;
do{
    printf("\n press 1 for +\n press 2 for - \npress 3 for * \npress 4 for / \n press 5 for %% \n press 0 for Exit");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    printf("\n Enter a&b:");
    scanf("%d %d",&a,&b);

    switch (ch)
    {
        case 1:
        printf("\n Addition is %d",a+b);
        break;
          case 2:
        printf("\n Minus is %d",a-b);
        break;
          case 3:
        printf("\n Multiply is %d",a*b);
        break;
          case 4:
        printf("\n Divide is %d",a/b);
        break;
          case 5:
        printf("\n Module is %d",a%b);
        break;
        case 0: break;
        default: printf("\n Invalid choice");
    }
}while(ch!=0);
}
int main()
{
    calc();
    return 0;
}