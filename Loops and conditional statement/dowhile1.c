#include<stdio.h>
/*write a program to find factorial of number by using do while loop*/

int main()


{ int n,f=1;
printf("enter the number");
scanf("%d",&n);
    do
    {
        f*=n;
        n--;
    } while (1<=n);

    printf("factorial of %d",f);
    
}