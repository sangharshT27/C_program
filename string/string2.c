#include <stdio.h>

int main() {
    char str [100]; 
  

    printf("Enter a string: ");
    gets(str); 
    printf("Vowels in the string: ");
   

    for (int i = 0; str[i] != '\0'; i++) 
    {
        char currentChar=str[i];
        if (currentChar == 'a' || currentChar == 'A' ||
            currentChar == 'e' || currentChar == 'E' ||
            currentChar == 'i' || currentChar == 'I' ||
            currentChar == 'o' || currentChar == 'O' ||
            currentChar == 'u' || currentChar == 'U') 
            {
            printf("%c ", currentChar);
        }
    }

    printf("\n");

    return 0;
}
