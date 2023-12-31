#include<stdio.h>
int main()
{
    int i,n,a,c=0,d;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        d=a*i;
        if(d%n==0)
        break;
    }
    if(d%n==0)
    {
        printf("%d",(n*a)/d);
    }
}