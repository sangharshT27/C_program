#include<stdio.h>
int main()
{
    int a,b=1,c;
    printf("enter the number");
    scanf("%d",&a);
    while(a>=b)
    {
        c++;
    }
    b++;
    if (c==1)
    {
        printf("number is prime no");
    }
    else
    {
        printf("it is not prime no");
    }
    return 0;
}