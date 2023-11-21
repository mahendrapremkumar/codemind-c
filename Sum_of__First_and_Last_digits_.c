#include<stdio.h>
int main()
{
    int m,n,sum=1;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n%n;
    }
    printf("%d",sum);
}