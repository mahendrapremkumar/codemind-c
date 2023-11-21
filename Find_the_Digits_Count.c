#include<stdio.h>
int main()
{
    int m,n,count=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        count=count+1;
        n=n/10;
    }
    printf("%d",count);
}