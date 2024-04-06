// Develop a C program that defines a strucure representing a Car(with attributes like model,year and price). List N numbers of cars' details using Array of objects.
#include <stdio.h>
#include<string.h>

struct vehical{
    char company_name[30];
    char model[30];
    int year;
    double price;
}car;

int main() { 
    {
    char company_name[30]="mercedes-benz";
    strcpy(car.company_name,company_name);
    char model[30]="AMG G 63";
    strcpy(car.model,model);
    car.year=2023;
    car.price=40000000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="Ford";
    strcpy(car.company_name,company_name);
    char model[30]="Mustang";
    strcpy(car.model,model);
    car.year=2024;
    car.price=8000000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="Audi";
    strcpy(car.company_name,company_name);
    char model[30]="Audi Q7";
    strcpy(car.model,model);
    car.year=2023;
    car.price=9445000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="BMW";
    strcpy(car.company_name,company_name);
    char model[30]="BMW X7 7 Series";
    strcpy(car.model,model);
    car.year=2023;
    car.price=12200000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    
    {
    char company_name[30]="Porsche";
    strcpy(car.company_name,company_name);
    char model[30]="Cayenne";
    strcpy(car.model,model);
    car.year=2022;
    car.price=13600000;
    
    
    printf("Car's Company Name is:%s\n",car.company_name);
    printf("Car's Model is:%s\n",car.model);
    printf("Car's Year is:%d\n",car.year);
    printf("Car's Price is:%.0lf\n\n",car.price);
    }
    

    return 0;
}