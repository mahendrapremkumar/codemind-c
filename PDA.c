#include<stdio.h>
int main()
{
    int a,c=0,i;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        c=c+i;
    }
    if(c==a)
    {
        printf("PERFECT");
    }
    else if(c<a)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}