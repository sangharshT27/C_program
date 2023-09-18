#include<stdio.h>
/*
void prime()
{
    int a,b=2,c=0;
    printf("enter the number");
    scanf("%d",&a);

    while(a>=b)
    {
        if(a%b==0)
           c++;
    b++;
} 
    if (c==1)
    {
        printf(" enterd no is prime no");

    }
    else
        {
         printf("no is not prime");

        }
    }

int main()
{
 prime();
 return 0;

}
*/

int prime(int a);
int main()
{
  int a,b=2,c=0;
    printf("enter the number");
    scanf("%d",&a);

    while(a>=b)
    {
        if(a%b==0)
           c++;
    b++;
} 
    if (c==1)
    {
        printf(" enterd no is prime no");

    }
    else
        {
         printf("no is not prime");

        }
    }

 int prime(int x)
    {
        return x;
    } 
    
