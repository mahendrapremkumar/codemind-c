#include<stdio.h>
int main()
{
    int a,b=1,c=0,d;
    scanf("%d",&a);
    while(a>0)
    {
        d=a%10;
        b=b*d;
        c=c+d;
        a=a/10;
    }
    printf("%d",b-c);
}