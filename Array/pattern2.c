#include<stdio.h>
int main()
{
    char i,j;
    
    for (int i = 'A'; i<='E'; i++)
    {
    
        for (int j='A'; j<=i; j++)
        {
            printf("%c",j);
            
        }
        printf("\n");
        
    }
}
/**
int i,j;
for (int i = 0; i<=5; i++)
{
    for (int j = 0;j<=1; j++)
    {
       if(j%2==0)
         printf("1");
       printf("0") ;
       

    }
    
    printf("\n");
}

}
    
*/