#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%5==0 && x%10==0)
    {
        printf("%d",x/10);
    }
    else if(x%5==0 && x%10!=0 && x>=10)
    {
        printf("%d",(x/10)+1);
    }
    else if(x%5==0 && x%10!=0 && x<10)
    {
        printf("%d",(x/5));
    }
    else
    {
        printf("-1");
    }
}