#include<stdio.h>
int Factorial(int f,int n);
int main()
{

int n,f=1;
    
    printf("enter the number");
    scanf("%d",&n);
    while(1<=n)
    {
       f*=n;
       n--;
       
    }
    printf("factorial of %d:",f);

return f;
}
