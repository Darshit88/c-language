// Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:

#include<stdio.h>

int main()
{
    int unit,bill,Electricity;
    printf("Enter unit:");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill=unit*0.50;
        printf("\n The first 50 units: %d",bill);
    }
    else if(unit>=51 && unit<=150)
    {
        bill=25+(unit-50)*0.75;
        printf("\n The next 100 units: %d",bill);
    }
    else if(unit>=151 && unit<=250)
    {
        bill=100+(unit-150)*1.20;
        printf("\n The next 100 units: %d",bill);
    }
    else{
        bill=220+(unit-250)*1.50;
        printf("\n The units above 250: %d",bill);
    }
    Electricity=bill+(bill*20/100);
    printf("\n Electricity Bill is: %d",Electricity);
}