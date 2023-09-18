/*write a program find the enterd number is prime */


#include<stdio.h>
int main()
{
    int num,count=1,c;
    printf("enter the number");
    scanf("%d",&num);


    do
    {
        
        if (num%count==0)
        {
            

            printf("number is not   prime");
            count++;
            break;

        }
        else
        {
            c++;
               
        }
             
    } while (num>=1);
    if (count==1)
    {
        printf("is prime");
    }
    
    


}