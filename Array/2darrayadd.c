#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
    printf("enter the first matrix");
    for ( i=0; i<3;i++)
    {
        for (j=0;i<3;j++)
        {
          scanf("%d",&arr1[i][j]);
        }
       
    }
    printf("enter the 2nd matrix");
    for( i=0; i<3; i++)
    {
        for( j=0;j<3;j++)
        {
          scanf("%d",&arr2[i][j]);
        }
    }
printf("addition of two matirx");
for ( i =0;i<3;i++)
{
    for (j=0; j < 3; j++)
    {
        arr3[i][j]=arr1[i][j]+arr2[i][j];
        

    }
    
}
for (i=0; i < 3; i++)
{
    for(j=0;j<3;j++)
    {
         printf("%d",arr3[i][j]);
    }
    printf("\n");
}
    return 0;
}