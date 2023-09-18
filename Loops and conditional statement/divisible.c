#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
if(a%8==0 &&  a%5==0)
{
printf("%d is divisible by 5 and 8",a);
}
else if(a%5==0)
{
    printf("%d is  divisible by 5 ",a);
}
else if (a%8==0)
{
    printf("%d is  divisible by 8 ",a);
}

else
{
    printf("not divisible by any given  no");
}
}