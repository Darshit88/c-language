#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(k = 1; k <= (rows - i) * 2; k++) {
            printf(" ");
        }
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
