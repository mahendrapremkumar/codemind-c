#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=1500-((a*2)+((a+b)*4));
    d=1500-((b*4)+((a+b)*2));
    if(c>d)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",d);
    }
}