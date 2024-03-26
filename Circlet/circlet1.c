#include <stdio.h>

int main() {
    int start_number = 41;
    for (int i = 0; i < 5; i++) {
        int current_number = start_number;
        for (int j = 0; j <= i; j++) {
            printf(" %d", current_number++);
        }
        printf("\n");
    }
    
    return 0;
}
