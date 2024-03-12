// Write a Program to print all alphabets from a to z by skipping 3 alphabets using do do-while loop.
#include <stdio.h>

int main() {
    char ch = 'a';
    
    do {
        printf("\n %c", ch);
        ch += 4;  
    } while (ch <= 'z');

    return 0;
}
