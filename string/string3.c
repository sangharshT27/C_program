#include <stdio.h>

int main() {
    char str[100]; 

    printf("Enter a string: ");
    gets(str); 
int length=0;
    
    while (str[length] != '\0') 
    {
        length++;
    }

    if (length > 0) {
        printf("First character: %c\n", str[0]);
        printf("Last character: %c\n", str[length - 1]);
    } else {
        printf("The string is empty.\n");
    }

    return 0;
}
