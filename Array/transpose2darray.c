#include <stdio.h>

int main() {
    int a, b, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &a, &col);

    int matrix[a][b], transpose[b][a];

    printf("Enter the elements of the matrix:\n");

    
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for (i = 0; i < a; i++) {
        for (j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Transpose of the matrix:\n");
    for (i = 0; i < b; i++) {
        for (j = 0; j < a; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
