#include<stdio.h>
int main()
{
    int count=0,a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0 && i%3==0)
        {
            count++;
            
        }
    }
    printf("%d",count);
}