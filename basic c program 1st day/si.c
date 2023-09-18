#include<stdio.h>
int main()
{
    int p,n,r,s;
    
    printf("enter the principle amount");
    scanf("%d",&p);
    printf("enter the rate ");
    scanf("%d",&n);
    printf("enter the time period ");
    scanf("%d",&r);

   s=(p*n*r)/100;
    printf("simple interest is=%d",s);
    return 0;
}