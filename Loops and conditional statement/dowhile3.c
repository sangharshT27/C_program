/*write a program to find the enterd no is armstrong*/
#include<stdio.h>
int main()


{
int num,r,c,sum=0,temp;

printf("enter the number");
scanf("%d",&num);
temp=num;
do
{
    r=num%10;
    c=r*r*r;
    sum=sum+c;
    num=num/10;
    
} while (num!=0);
if (temp==sum)
{
    printf(" is palindrome:");
}
else
{
    printf(" is not palindrome");
}


}