#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    scanf("%f%f%f",&bs,&da,&hra);
    if(bs<=10000)
    {
        da=bs*0.80;
        hra=bs*0.20;
    }
    else if(bs<=20000)
    {
        da=bs*0.90;
        hra=bs*0.25;
    }
    else if(bs>20000)
    {
        da=0.95*bs;
        hra=bs*0.30;
    }
    gs=bs+da+hra;
    printf("%.2f",gs);
}