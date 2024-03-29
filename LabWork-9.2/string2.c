#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char pass[100];
    char crnt_email[] = "darshit2904@gmail.com";
    char crnt_pass[] = "dp@1234";

    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", pass);

    if (strcmp(email, crnt_email) == 0 && strcmp(pass, crnt_pass) == 0)
    {
        printf("Login Successful...\n");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}
