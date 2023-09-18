#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5]={2,4,6,8,10};
    int add[5];
    for ( int i = 0; i <5; i++)
    {
        add[i]=arr[i]+arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("add[%d]=%d\n",i,add[i]);
    }
    
    
}