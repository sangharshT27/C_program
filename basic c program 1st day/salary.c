#include<stdio.h>
int main()
{
    int bs,da,hra,ta,gs,ns,pf;
    printf("enter the basic salary");
    scanf("%d",&bs);
da=bs*40/100;
hra=bs*25/100;
pf=bs*30/100;
ta=bs*20/100;

gs=bs+hra+ta+da+pf;
ns=gs-hra+ta+da+pf;
printf("da is:%d",da);

printf("hra is:%d",hra);

printf("pf is:%d",pf);
printf("ta is:%d",ta);

printf("gs is:%d",gs);
printf("ns is:%d",ns);





}


