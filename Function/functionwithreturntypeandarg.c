#include<stdio.h>

int Fact(int f);
int main()
{

int n,f=1;
scanf("%d",&n);
while(1<=n)
{
    f*=n;
    n--;
    
}
 printf("%d",f);
}
int Fact(int x)
{
    return x;
}


