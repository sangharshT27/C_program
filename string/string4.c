#include <stdio.h>

int main() {
    char inputString[100]; 

    printf("Enter a string: ");
    gets(inputString); 

    int length = 0;

    
    while (inputString[length] != '\0') {
        length++;
    }

    printf("Reverse of the string: ");
 
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }

    printf("\n");

    return 0;
}
