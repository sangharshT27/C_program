#include <stdio.h>
int main()

{
int a,b,c,d,e;
printf("enter the five number ");
scanf("%d%d%d%d%d,",&a,&b,&c,&d,&e);
if(a>b && a>c && a>d && a>e)
{
    printf("a is greater  : %d",a);
}
else if (b>c && b>a && b>d && b>e)
{
   printf("b is greater  :%d",b);

}
else if(c>a && c>b && c>d && c>e)
{
    printf("c is greater  :%d",c);
}
else if(d>c && d>a && d>b && d>e)
{
    printf("d is greater :%d",d);
}
else
{
    printf("e is gerater :%d",e);
}
}
