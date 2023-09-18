#include<stdio.h>
int main()
{
    int num,r,c,sum=0,temp;
    
    printf("enter the number");
scanf("%d",&num);
temp=num;
while (num!=0)
{
    r=num%10;
    c=r*r*r;
    sum=sum+c;
    num=num/10;
    
    
}
if (temp==sum)
    {
        printf("number is armstrong");
    }
    else{

        printf("number is not armstrong");
    }

}