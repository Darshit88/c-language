// Write a c program that defines a function to reverse a string without using any library function.]

#include <stdio.h>
void rev(char str[])
{
    int l = 0, i;
    while (str[l] != '\0')
    {
        l++;
    }
    for (i = 0; i < l / 2; i++)
    {
        char temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
}
int main()
{
    char str[100];
    printf("Enter a String:");
    scanf("%s", str);
    rev(str);

    printf("Reverse String is:%s\n", str);
    return 0;
}