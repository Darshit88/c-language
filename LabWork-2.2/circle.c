// Write a Program to find the area of a circle.

#include <stdio.h>

int main() {

    float r, area;

    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("The area of circle %.2f is: %.2f\n", r, area);

    return 0;
}
