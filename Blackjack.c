#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a+b>=11)
    {
        printf("%d",21-(a+b));
    }
    else
    {
        printf("-1");
    }
}