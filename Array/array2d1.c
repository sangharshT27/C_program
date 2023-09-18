#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    for ( i = 0; i <3; i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&a[i][j]);
        }
        printf("\n matrix");
    }
     for ( i = 0; i <3; i++)
    {
        for (i = 0; i<3; i++)
        {
           if (i+j==1 || i+j==3)
           { 
            printf("%d",a[i][j]);
            sum=a[i][j]+sum;
           
           }
            
        }  
    
    
    }
    printf("%d",sum);


}