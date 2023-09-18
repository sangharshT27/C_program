/*multiplication of 2 d array*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, a[2][2], b[2][2], c[2][2];

    printf("Enter elements of matrix a (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix b (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize the result matrix c to all zeros
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
