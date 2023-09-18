#include<stdio.h>
int arm(int a);
int main()
{

    int r,sum=0,s=0,a;
    printf("enter the number");
    scanf("%d",&a);
  s==a;

    while(a!=0)
    {
        r=a%10;
        sum=sum+(r*r*r);
        a=a/10;
        
    }
    printf("%d",sum);
if(s==sum)
{
printf(" is armstrong");

}
else
{
    printf("  not armstrong");

}
}
int arm(int x)
{
    return x;
    
}