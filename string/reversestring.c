#include<stdio.h>
int main()
{
    char str[20];
    int len;
    char rev;
    printf("enter the string :");
    scanf("%c",str);
    for( len=0;len!='\0';len++)
    {
        for(rev =len-1;rev>=0; rev--)
    {
        printf("%c",rev);
    }
      
       
    }
    printf("%d",len); 
   \
}