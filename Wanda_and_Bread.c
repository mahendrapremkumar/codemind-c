#include<stdio.h>
int main ()
{
    int k,n,m,e,d;
    scanf("%d%d%d",&k,&n,&m);
    d=k%m;
    e=k/m;
    if(d==0 && e<=n)
    {
        printf("YES");
    }
    else if(d==0 && e>n)
    {
        printf("NO");
    }
    else if(d!=0 && e+1<=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}