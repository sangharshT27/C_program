#include<stdio.h>


int main()
/*WAP to convert the temperature Fahrenheit degree into degree celcius.
Celsius = ((Fahrenheit - 32) / (1.8)) & Fahrenheit = (1.8* Celsius) + 32; */

  {
    int c;
    float f;

    printf("enter the tempreture");
    scanf("%d",&c);

    printf("enter the fahrenheit");
    scanf("%f",&f);

c=(f-32)/1.8;




printf("fahrenheit to celcius:%d",c);


  }