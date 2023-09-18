/*with return type without para*/
#include<stdio.h>
int Add(void);
 int  main()
{

int ans;
ans=Add();
/*printf("%d",ans);*/
printf("%d",Add());

}
int Add(void)
{
    int a=10,b=10,c;
    c=a+b;
   
    return c;
}