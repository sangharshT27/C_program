/* write a program sum of five individual number */
#include<stdio.h>
int main()
{
    int num,sum=0,count;
    printf("enter the five digit number");
    scanf("%d",&num);
    do
    {
        count=num%10;
        sum=sum+count;
        num=num/10;

    } while (num>0);
    printf("%d",sum);
    
}