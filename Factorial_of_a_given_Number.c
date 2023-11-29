#include<stdio.h>
int main()
{
    int f=1,n,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("%d",f);
}