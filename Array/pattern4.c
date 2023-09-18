#include <stdio.h>

int main() {
     // Number of rows for the pattern

    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
