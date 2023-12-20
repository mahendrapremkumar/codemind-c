#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1)
    {
        printf("1");
    }
    else if(a==2)
    {
        printf("2");
    }
    else if(a==3)
    {
        printf("3");
    }
    else if(a==4)
    {
        printf("4");
    }
    else if(a%5==0)
    {
        printf("%d",a/5);
    }
    else
    {
        printf("%d",(a/5)+1);
    }
    
}