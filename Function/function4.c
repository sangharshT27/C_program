#include<stdio.h>
int Add(int,int);
int main()
{
    int  a=20,b=30,c;
    Add(a,b);
    c=Add(a,b);
    printf("%d",c);
}
int Add(int x,int y)
{
    return x+y;
}
