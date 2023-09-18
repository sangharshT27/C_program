/*without return type with parameter*/
#include<stdio.h>
void Add(int,int);
int main()
{
int x,y;
scanf("%d%d",&x,&y);
Add(x,y);
}
void Add( int x, int y)
{
 printf("Add=:%d",x+y);

}
