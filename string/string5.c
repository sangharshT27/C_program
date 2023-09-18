#include <stdio.h>

int main() {
    char inputString[100]; 

    printf("Enter a string: ");
    gets(inputString); 

    int length = 0;

  
    while (inputString[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
