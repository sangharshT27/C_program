#include<stdio.h>
int main()
{
    int saleamt;
    printf("enter the sale amount");
    scanf("%d",&saleamt);
    if(saleamt>1000)
    {
        printf("comission is =15%");
    }
else
{
    printf("commission is less than 15%");
}



    
}