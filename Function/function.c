/*without return type and parameter*/

/*factorial no*/

#include<stdio.h>


    void Fact()
    {
        int n,f=1;
        scanf("%d",&n);

       while (1<=n)
       {
        f*=n;
        n--;
        
       }
    printf("%d",f);
    }


int main()
{
    Fact();
    return 0;
}
