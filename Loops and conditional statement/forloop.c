/*fibonacci*/
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: \n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            c = i;
        else {
           c=a+b;
           a=b;
           b=c;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
