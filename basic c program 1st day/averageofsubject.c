#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total,avg;
    printf("enter the marks of subject1");
    scanf("%d",&sub1);

     printf("enter the marks of subject2");
    scanf("%d",&sub2);
    
     printf("enter the marks of subject1");
    scanf("%d",&sub3);

     printf("enter the marks of subject1");
    scanf("%d",&sub4);
    

     printf("enter the marks of subject1");
    scanf("%d",&sub5);
    
    total=sub1+sub2+sub3+sub4+sub5;
    avg=total/5;

    printf("total of 5 subject:%d",total);
    printf("avg of 5 subject :%d",avg);

}