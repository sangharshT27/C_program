#include<stdio.h>
int main()
{    
    int celcius,fa,op,cf,fc;
    printf("enter the operation no");
    scanf("%d",&op);
    switch (op)
    {
    case 1: 
    printf("enter faherheit value");
    scanf("%d",&fa);
    cf=(fa-32)/1.8;
    printf("%d",cf);

        break;
    case 2:
    printf("enter celcius value");
    scanf("%d"&celcius);
    fc=(1.8*celcius)+32;
    printf("%d",fc);
    break;

    default:
       
    }
}