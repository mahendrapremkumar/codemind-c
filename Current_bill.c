#include<stdio.h>
int main()
{
    float x,b,c,d,e;
    scanf("%f",&x);
    b=x*1.20;
    c=x*1.50;
    d=x*1.80;
    e=x*2.00;
    if(x<199)
    {
        printf("%.2f",b+100);
    }
    else if(x>=200 && x<400)
    {
        printf("%.2f",c+100);
    }
    else if(x>=400 && x<600)
    {
        printf("%.2f",d+(d*15/100));
    }
    else
    {
        printf("%.2f",e+(e*15/100));
    }
}