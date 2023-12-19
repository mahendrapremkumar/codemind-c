#include<stdio.h>
int main()
{
    int a,b,c=0,d=1;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;  //b=1124  %  10 = 4
        a=a/10;  //a=1124  /  10 = 1
        c=c+b;
        d=d*b;
    }
    if(c==d)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}