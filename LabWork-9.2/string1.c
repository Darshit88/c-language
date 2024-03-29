#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strong(char pass[])
{
    int i;
    int letter = 0, digit = 0, special = 0;
    if (strlen(pass) < 6)
        return 0;
    for (i = 0; pass[i] != '\0'; i++)
    {
        if (isalpha(pass[i]))
            letter = 1;
        else if (isdigit(pass[i]))
            digit = 1;
        else if (ispunct(pass[i]))
            special = 1;
    }
    return (letter && digit && special);
}

int main()
{
    char pass[100];

    printf("Create your password: ");
    scanf("%s", pass);

    if (strong(pass))
        printf("Your password is Strong.\n");
    else
        printf("Your password is not Strong.\n");

    return 0;
}
