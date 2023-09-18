#include <stdio.h>

int main() {
    int num, rev = 0, rem,temp;
    temp=num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;    // Get the last digit
        rev = rev * 10 + rem;   // Add the digit to the reversed number
        num = num / 10;          // Remove the last digit
    }

    printf("Reversed number: %d\n", rev);
    if (temp==rev)
    {
        printf("enter no is palindrome");

    }
    else
    {
        printf(" no is not palindrome");
    }


    return 0;

}
